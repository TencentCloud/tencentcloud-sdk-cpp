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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREFJOBINFO_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREFJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 资源被Job 引用信息
                */
                class ResourceRefJobInfo : public AbstractModel
                {
                public:
                    ResourceRefJobInfo();
                    ~ResourceRefJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Job id
                     * @return JobId Job id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job id
                     * @param _jobId Job id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Job配置版本
                     * @return JobConfigVersion Job配置版本
                     * 
                     */
                    int64_t GetJobConfigVersion() const;

                    /**
                     * 设置Job配置版本
                     * @param _jobConfigVersion Job配置版本
                     * 
                     */
                    void SetJobConfigVersion(const int64_t& _jobConfigVersion);

                    /**
                     * 判断参数 JobConfigVersion 是否已赋值
                     * @return JobConfigVersion 是否已赋值
                     * 
                     */
                    bool JobConfigVersionHasBeenSet() const;

                    /**
                     * 获取资源版本
                     * @return ResourceVersion 资源版本
                     * 
                     */
                    int64_t GetResourceVersion() const;

                    /**
                     * 设置资源版本
                     * @param _resourceVersion 资源版本
                     * 
                     */
                    void SetResourceVersion(const int64_t& _resourceVersion);

                    /**
                     * 判断参数 ResourceVersion 是否已赋值
                     * @return ResourceVersion 是否已赋值
                     * 
                     */
                    bool ResourceVersionHasBeenSet() const;

                private:

                    /**
                     * Job id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Job配置版本
                     */
                    int64_t m_jobConfigVersion;
                    bool m_jobConfigVersionHasBeenSet;

                    /**
                     * 资源版本
                     */
                    int64_t m_resourceVersion;
                    bool m_resourceVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREFJOBINFO_H_
