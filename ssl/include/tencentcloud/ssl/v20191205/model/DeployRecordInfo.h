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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 部署记录信息
                */
                class DeployRecordInfo : public AbstractModel
                {
                public:
                    DeployRecordInfo();
                    ~DeployRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署记录ID
                     * @return Id 部署记录ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置部署记录ID
                     * @param _id 部署记录ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取部署证书ID
                     * @return CertId 部署证书ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置部署证书ID
                     * @param _certId 部署证书ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取部署资源类型
                     * @return ResourceType 部署资源类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置部署资源类型
                     * @param _resourceType 部署资源类型
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取部署地域
                     * @return Region 部署地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置部署地域
                     * @param _region 部署地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取部署状态:0 未开始， 1 成功， 2 失败
                     * @return Status 部署状态:0 未开始， 1 成功， 2 失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置部署状态:0 未开始， 1 成功， 2 失败
                     * @param _status 部署状态:0 未开始， 1 成功， 2 失败
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取部署时间
                     * @return CreateTime 部署时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置部署时间
                     * @param _createTime 部署时间
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
                     * 获取最近一次更新时间
                     * @return UpdateTime 最近一次更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近一次更新时间
                     * @param _updateTime 最近一次更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 部署记录ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 部署证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 部署资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 部署地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 部署状态:0 未开始， 1 成功， 2 失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 部署时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近一次更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDINFO_H_
