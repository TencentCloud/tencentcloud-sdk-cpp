/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGTARGET_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Kong Upstream中的Target
                */
                class KongTarget : public AbstractModel
                {
                public:
                    KongTarget();
                    ~KongTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host
                     * @return Host Host
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host
                     * @param _host Host
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取权重
                     * @return Weight 权重
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置权重
                     * @param _weight 权重
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取健康状态
                     * @return Health 健康状态
                     * 
                     */
                    std::string GetHealth() const;

                    /**
                     * 设置健康状态
                     * @param _health 健康状态
                     * 
                     */
                    void SetHealth(const std::string& _health);

                    /**
                     * 判断参数 Health 是否已赋值
                     * @return Health 是否已赋值
                     * 
                     */
                    bool HealthHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Target的来源
                     * @return Source Target的来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Target的来源
                     * @param _source Target的来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取CVM实例ID
                     * @return CvmInstanceId CVM实例ID
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置CVM实例ID
                     * @param _cvmInstanceId CVM实例ID
                     * 
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取CVM实例名称
                     * @return CvmInstanceName CVM实例名称
                     * 
                     */
                    std::string GetCvmInstanceName() const;

                    /**
                     * 设置CVM实例名称
                     * @param _cvmInstanceName CVM实例名称
                     * 
                     */
                    void SetCvmInstanceName(const std::string& _cvmInstanceName);

                    /**
                     * 判断参数 CvmInstanceName 是否已赋值
                     * @return CvmInstanceName 是否已赋值
                     * 
                     */
                    bool CvmInstanceNameHasBeenSet() const;

                    /**
                     * 获取target标签
                     * @return Tags target标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置target标签
                     * @param _tags target标签
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Host
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 权重
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 健康状态
                     */
                    std::string m_health;
                    bool m_healthHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Target的来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * CVM实例ID
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * CVM实例名称
                     */
                    std::string m_cvmInstanceName;
                    bool m_cvmInstanceNameHasBeenSet;

                    /**
                     * target标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGTARGET_H_
