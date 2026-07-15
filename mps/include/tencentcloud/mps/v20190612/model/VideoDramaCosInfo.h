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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIDEODRAMACOSINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIDEODRAMACOSINFO_H_

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
                * aigc cos信息，存储用户请求时填写的cos信息，存放结果
                */
                class VideoDramaCosInfo : public AbstractModel
                {
                public:
                    VideoDramaCosInfo();
                    ~VideoDramaCosInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>cos通地域</p>
                     * @return CosBucketRegion <p>cos通地域</p>
                     * 
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置<p>cos通地域</p>
                     * @param _cosBucketRegion <p>cos通地域</p>
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
                     * 获取<p>cos桶名称</p>
                     * @return CosBucketName <p>cos桶名称</p>
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置<p>cos桶名称</p>
                     * @param _cosBucketName <p>cos桶名称</p>
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
                     * 获取<p>cos桶路径</p>
                     * @return CosBucketPath <p>cos桶路径</p>
                     * 
                     */
                    std::string GetCosBucketPath() const;

                    /**
                     * 设置<p>cos桶路径</p>
                     * @param _cosBucketPath <p>cos桶路径</p>
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
                     * <p>cos通地域</p>
                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                    /**
                     * <p>cos桶名称</p>
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * <p>cos桶路径</p>
                     */
                    std::string m_cosBucketPath;
                    bool m_cosBucketPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEODRAMACOSINFO_H_
