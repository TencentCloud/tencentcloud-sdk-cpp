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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AGENTSTORECOSPARAM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AGENTSTORECOSPARAM_H_

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
                * Agent结果文件上传COS时，需传入的信息。 需创建并授权MPS_QcsRole角色。
                */
                class AgentStoreCosParam : public AbstractModel
                {
                public:
                    AgentStoreCosParam();
                    ~AgentStoreCosParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储至 cos 的 bucket 桶名称。需要cos存储时，该值必填。 示例值：bucket。</p>
                     * @return CosBucketName <p>存储至 cos 的 bucket 桶名称。需要cos存储时，该值必填。 示例值：bucket。</p>
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置<p>存储至 cos 的 bucket 桶名称。需要cos存储时，该值必填。 示例值：bucket。</p>
                     * @param _cosBucketName <p>存储至 cos 的 bucket 桶名称。需要cos存储时，该值必填。 示例值：bucket。</p>
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
                     * 获取<p>存储至 cos 的 bucket 区域。与bucket所属区域相同，上传cos时必填。 示例值：ap-guangzhou</p>
                     * @return CosBucketRegion <p>存储至 cos 的 bucket 区域。与bucket所属区域相同，上传cos时必填。 示例值：ap-guangzhou</p>
                     * 
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置<p>存储至 cos 的 bucket 区域。与bucket所属区域相同，上传cos时必填。 示例值：ap-guangzhou</p>
                     * @param _cosBucketRegion <p>存储至 cos 的 bucket 区域。与bucket所属区域相同，上传cos时必填。 示例值：ap-guangzhou</p>
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
                     * 获取<p>存储至 cos 的 bucket 路径。<br>可选。<br>示例值：my_file</p>
                     * @return CosBucketPath <p>存储至 cos 的 bucket 路径。<br>可选。<br>示例值：my_file</p>
                     * 
                     */
                    std::string GetCosBucketPath() const;

                    /**
                     * 设置<p>存储至 cos 的 bucket 路径。<br>可选。<br>示例值：my_file</p>
                     * @param _cosBucketPath <p>存储至 cos 的 bucket 路径。<br>可选。<br>示例值：my_file</p>
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
                     * <p>存储至 cos 的 bucket 桶名称。需要cos存储时，该值必填。 示例值：bucket。</p>
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * <p>存储至 cos 的 bucket 区域。与bucket所属区域相同，上传cos时必填。 示例值：ap-guangzhou</p>
                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                    /**
                     * <p>存储至 cos 的 bucket 路径。<br>可选。<br>示例值：my_file</p>
                     */
                    std::string m_cosBucketPath;
                    bool m_cosBucketPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AGENTSTORECOSPARAM_H_
