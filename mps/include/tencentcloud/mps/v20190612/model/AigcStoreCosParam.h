/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCSTORECOSPARAM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCSTORECOSPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Aigc结果文件上传COS时，需传入的信息。 需创建并授权LVB_QCSRole角色。
                */
                class AigcStoreCosParam : public AbstractModel
                {
                public:
                    AigcStoreCosParam();
                    ~AigcStoreCosParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储至 cos 的 bucket 桶名称。需要cos存储时，该值必填。 示例值：bucket。
                     * @return CosBucketName 存储至 cos 的 bucket 桶名称。需要cos存储时，该值必填。 示例值：bucket。
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置存储至 cos 的 bucket 桶名称。需要cos存储时，该值必填。 示例值：bucket。
                     * @param _cosBucketName 存储至 cos 的 bucket 桶名称。需要cos存储时，该值必填。 示例值：bucket。
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取存储至 cos 的 bucket 区域。与bucket所属区域相同，上传cos时必填。 示例值：ap-guangzhou
                     * @return CosBucketRegion 存储至 cos 的 bucket 区域。与bucket所属区域相同，上传cos时必填。 示例值：ap-guangzhou
                     * 
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置存储至 cos 的 bucket 区域。与bucket所属区域相同，上传cos时必填。 示例值：ap-guangzhou
                     * @param _cosBucketRegion 存储至 cos 的 bucket 区域。与bucket所属区域相同，上传cos时必填。 示例值：ap-guangzhou
                     * 
                     */
                    void SetCosBucketRegion(const std::string& _cosBucketRegion);

                    /**
                     * 判断参数 CosBucketRegion 是否已赋值
                     * @return CosBucketRegion 是否已赋值
                     * 
                     */
                    bool CosBucketRegionHasBeenSet() const;

                    /**
                     * 获取存储至 cos 的 bucket 路径。
可选。
示例值：my_file
                     * @return CosBucketPath 存储至 cos 的 bucket 路径。
可选。
示例值：my_file
                     * 
                     */
                    std::string GetCosBucketPath() const;

                    /**
                     * 设置存储至 cos 的 bucket 路径。
可选。
示例值：my_file
                     * @param _cosBucketPath 存储至 cos 的 bucket 路径。
可选。
示例值：my_file
                     * 
                     */
                    void SetCosBucketPath(const std::string& _cosBucketPath);

                    /**
                     * 判断参数 CosBucketPath 是否已赋值
                     * @return CosBucketPath 是否已赋值
                     * 
                     */
                    bool CosBucketPathHasBeenSet() const;

                private:

                    /**
                     * 存储至 cos 的 bucket 桶名称。需要cos存储时，该值必填。 示例值：bucket。
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 存储至 cos 的 bucket 区域。与bucket所属区域相同，上传cos时必填。 示例值：ap-guangzhou
                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                    /**
                     * 存储至 cos 的 bucket 路径。
可选。
示例值：my_file
                     */
                    std::string m_cosBucketPath;
                    bool m_cosBucketPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCSTORECOSPARAM_H_
