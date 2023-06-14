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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_SNAPSHOTINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_SNAPSHOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 快照信息
                */
                class SnapshotInfo : public AbstractModel
                {
                public:
                    SnapshotInfo();
                    ~SnapshotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取快照的对象存储地址
                     * @return CosUrl 快照的对象存储地址
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置快照的对象存储地址
                     * @param _cosUrl 快照的对象存储地址
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取添加时间
                     * @return CreatedOn 添加时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置添加时间
                     * @param _createdOn 添加时间
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取所属域名
                     * @return Domain 所属域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置所属域名
                     * @param _domain 所属域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取快照记录 ID
                     * @return Id 快照记录 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置快照记录 ID
                     * @param _id 快照记录 ID
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
                     * 获取域名解析记录数
                     * @return RecordCount 域名解析记录数
                     * 
                     */
                    std::string GetRecordCount() const;

                    /**
                     * 设置域名解析记录数
                     * @param _recordCount 域名解析记录数
                     * 
                     */
                    void SetRecordCount(const std::string& _recordCount);

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     * 
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取状态：normal-正常，create-备份中
                     * @return Status 状态：normal-正常，create-备份中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：normal-正常，create-备份中
                     * @param _status 状态：normal-正常，create-备份中
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 快照的对象存储地址
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * 添加时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 所属域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 快照记录 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 域名解析记录数
                     */
                    std::string m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * 状态：normal-正常，create-备份中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_SNAPSHOTINFO_H_
