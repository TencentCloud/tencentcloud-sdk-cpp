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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_KONGTARGET_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_KONGTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
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
                     * 获取<p>目标主机地址</p>
                     * @return Host <p>目标主机地址</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>目标主机地址</p>
                     * @param _host <p>目标主机地址</p>
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
                     * 获取<p>端口</p>
                     * @return Port <p>端口</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>端口</p>
                     * @param _port <p>端口</p>
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
                     * 获取<p>权重</p>
                     * @return Weight <p>权重</p>
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置<p>权重</p>
                     * @param _weight <p>权重</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
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
                     * 获取<p>CVM实例ID</p>
                     * @return CvmInstanceId <p>CVM实例ID</p>
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置<p>CVM实例ID</p>
                     * @param _cvmInstanceId <p>CVM实例ID</p>
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
                     * 获取<p>CVM实例名称</p>
                     * @return CvmInstanceName <p>CVM实例名称</p>
                     * 
                     */
                    std::string GetCvmInstanceName() const;

                    /**
                     * 设置<p>CVM实例名称</p>
                     * @param _cvmInstanceName <p>CVM实例名称</p>
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
                     * 获取<p>健康状态</p>
                     * @return Health <p>健康状态</p>
                     * 
                     */
                    std::string GetHealth() const;

                    /**
                     * 设置<p>健康状态</p>
                     * @param _health <p>健康状态</p>
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
                     * 获取<p>Target ID</p>
                     * @return Id <p>Target ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Target ID</p>
                     * @param _id <p>Target ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Target的来源</p>
                     * @return Source <p>Target的来源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>Target的来源</p>
                     * @param _source <p>Target的来源</p>
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
                     * 获取<p>target标签</p>
                     * @return Tags <p>target标签</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>target标签</p>
                     * @param _tags <p>target标签</p>
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
                     * <p>目标主机地址</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>端口</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>权重</p>
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>CVM实例ID</p>
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * <p>CVM实例名称</p>
                     */
                    std::string m_cvmInstanceName;
                    bool m_cvmInstanceNameHasBeenSet;

                    /**
                     * <p>健康状态</p>
                     */
                    std::string m_health;
                    bool m_healthHasBeenSet;

                    /**
                     * <p>Target ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Target的来源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>target标签</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_KONGTARGET_H_
