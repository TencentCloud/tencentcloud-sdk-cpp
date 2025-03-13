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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_RUMPROJECT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_RUMPROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/Kafka.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Rum 项目信息
                */
                class RumProject : public AbstractModel
                {
                public:
                    RumProject();
                    ~RumProject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目名
                     * @return Name 项目名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名
                     * @param _name 项目名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取创建者 id
                     * @return Creator 创建者 id
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者 id
                     * @param _creator 创建者 id
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取实例 id
                     * @return InstanceID 实例 id
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例 id
                     * @param _instanceID 实例 id
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取项目类型
                     * @return Type 项目类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置项目类型
                     * @param _type 项目类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取项目仓库地址
                     * @return Repo 项目仓库地址
                     * 
                     */
                    std::string GetRepo() const;

                    /**
                     * 设置项目仓库地址
                     * @param _repo 项目仓库地址
                     * 
                     */
                    void SetRepo(const std::string& _repo);

                    /**
                     * 判断参数 Repo 是否已赋值
                     * @return Repo 是否已赋值
                     * 
                     */
                    bool RepoHasBeenSet() const;

                    /**
                     * 获取项目网址地址
                     * @return URL 项目网址地址
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置项目网址地址
                     * @param _uRL 项目网址地址
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取项目采样频率
                     * @return Rate 项目采样频率
                     * 
                     */
                    std::string GetRate() const;

                    /**
                     * 设置项目采样频率
                     * @param _rate 项目采样频率
                     * 
                     */
                    void SetRate(const std::string& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取项目唯一key（长度 12 位）
                     * @return Key 项目唯一key（长度 12 位）
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置项目唯一key（长度 12 位）
                     * @param _key 项目唯一key（长度 12 位）
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取是否开启url聚类
                     * @return EnableURLGroup 是否开启url聚类
                     * 
                     */
                    int64_t GetEnableURLGroup() const;

                    /**
                     * 设置是否开启url聚类
                     * @param _enableURLGroup 是否开启url聚类
                     * 
                     */
                    void SetEnableURLGroup(const int64_t& _enableURLGroup);

                    /**
                     * 判断参数 EnableURLGroup 是否已赋值
                     * @return EnableURLGroup 是否已赋值
                     * 
                     */
                    bool EnableURLGroupHasBeenSet() const;

                    /**
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取项目 ID
                     * @return ID 项目 ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目 ID
                     * @param _iD 项目 ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取实例 key
                     * @return InstanceKey 实例 key
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置实例 key
                     * @param _instanceKey 实例 key
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取项目描述
                     * @return Desc 项目描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置项目描述
                     * @param _desc 项目描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取是否星标  1:是 0:否
                     * @return IsStar 是否星标  1:是 0:否
                     * 
                     */
                    int64_t GetIsStar() const;

                    /**
                     * 设置是否星标  1:是 0:否
                     * @param _isStar 是否星标  1:是 0:否
                     * 
                     */
                    void SetIsStar(const int64_t& _isStar);

                    /**
                     * 判断参数 IsStar 是否已赋值
                     * @return IsStar 是否已赋值
                     * 
                     */
                    bool IsStarHasBeenSet() const;

                    /**
                     * 获取项目状态(1 创建中，2 运行中，3 异常，4 重启中，5 停止中，6 已停止， 7 销毁中，8 已销毁)
                     * @return ProjectStatus 项目状态(1 创建中，2 运行中，3 异常，4 重启中，5 停止中，6 已停止， 7 销毁中，8 已销毁)
                     * 
                     */
                    int64_t GetProjectStatus() const;

                    /**
                     * 设置项目状态(1 创建中，2 运行中，3 异常，4 重启中，5 停止中，6 已停止， 7 销毁中，8 已销毁)
                     * @param _projectStatus 项目状态(1 创建中，2 运行中，3 异常，4 重启中，5 停止中，6 已停止， 7 销毁中，8 已销毁)
                     * 
                     */
                    void SetProjectStatus(const int64_t& _projectStatus);

                    /**
                     * 判断参数 ProjectStatus 是否已赋值
                     * @return ProjectStatus 是否已赋值
                     * 
                     */
                    bool ProjectStatusHasBeenSet() const;

                    /**
                     * 获取日志接入点，用户忽略。
                     * @return AccessPoint 日志接入点，用户忽略。
                     * 
                     */
                    std::string GetAccessPoint() const;

                    /**
                     * 设置日志接入点，用户忽略。
                     * @param _accessPoint 日志接入点，用户忽略。
                     * 
                     */
                    void SetAccessPoint(const std::string& _accessPoint);

                    /**
                     * 判断参数 AccessPoint 是否已赋值
                     * @return AccessPoint 是否已赋值
                     * 
                     */
                    bool AccessPointHasBeenSet() const;

                    /**
                     * 获取kafka旁路配置信息
                     * @return Kafka kafka旁路配置信息
                     * 
                     */
                    Kafka GetKafka() const;

                    /**
                     * 设置kafka旁路配置信息
                     * @param _kafka kafka旁路配置信息
                     * 
                     */
                    void SetKafka(const Kafka& _kafka);

                    /**
                     * 判断参数 Kafka 是否已赋值
                     * @return Kafka 是否已赋值
                     * 
                     */
                    bool KafkaHasBeenSet() const;

                private:

                    /**
                     * 项目名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 创建者 id
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 实例 id
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 项目类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 项目仓库地址
                     */
                    std::string m_repo;
                    bool m_repoHasBeenSet;

                    /**
                     * 项目网址地址
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 项目采样频率
                     */
                    std::string m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 项目唯一key（长度 12 位）
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 是否开启url聚类
                     */
                    int64_t m_enableURLGroup;
                    bool m_enableURLGroupHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 项目 ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 实例 key
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * 项目描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 是否星标  1:是 0:否
                     */
                    int64_t m_isStar;
                    bool m_isStarHasBeenSet;

                    /**
                     * 项目状态(1 创建中，2 运行中，3 异常，4 重启中，5 停止中，6 已停止， 7 销毁中，8 已销毁)
                     */
                    int64_t m_projectStatus;
                    bool m_projectStatusHasBeenSet;

                    /**
                     * 日志接入点，用户忽略。
                     */
                    std::string m_accessPoint;
                    bool m_accessPointHasBeenSet;

                    /**
                     * kafka旁路配置信息
                     */
                    Kafka m_kafka;
                    bool m_kafkaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_RUMPROJECT_H_
