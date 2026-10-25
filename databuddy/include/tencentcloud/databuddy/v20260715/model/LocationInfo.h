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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LOCATIONINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LOCATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>
#include <tencentcloud/databuddy/v20260715/model/Audit.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 存储位置详情
                */
                class LocationInfo : public AbstractModel
                {
                public:
                    LocationInfo();
                    ~LocationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储位置名
                     * @return LocationName 存储位置名
                     * 
                     */
                    std::string GetLocationName() const;

                    /**
                     * 设置存储位置名
                     * @param _locationName 存储位置名
                     * 
                     */
                    void SetLocationName(const std::string& _locationName);

                    /**
                     * 判断参数 LocationName 是否已赋值
                     * @return LocationName 是否已赋值
                     * 
                     */
                    bool LocationNameHasBeenSet() const;

                    /**
                     * 获取存储位置URI
                     * @return LocationUri 存储位置URI
                     * 
                     */
                    std::string GetLocationUri() const;

                    /**
                     * 设置存储位置URI
                     * @param _locationUri 存储位置URI
                     * 
                     */
                    void SetLocationUri(const std::string& _locationUri);

                    /**
                     * 判断参数 LocationUri 是否已赋值
                     * @return LocationUri 是否已赋值
                     * 
                     */
                    bool LocationUriHasBeenSet() const;

                    /**
                     * 获取存储位置描述
                     * @return Comment 存储位置描述
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置存储位置描述
                     * @param _comment 存储位置描述
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取存储位置属性
                     * @return Properties 存储位置属性
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置存储位置属性
                     * @param _properties 存储位置属性
                     * 
                     */
                    void SetProperties(const std::vector<KVPair>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取审计信息
                     * @return Audit 审计信息
                     * 
                     */
                    Audit GetAudit() const;

                    /**
                     * 设置审计信息
                     * @param _audit 审计信息
                     * 
                     */
                    void SetAudit(const Audit& _audit);

                    /**
                     * 判断参数 Audit 是否已赋值
                     * @return Audit 是否已赋值
                     * 
                     */
                    bool AuditHasBeenSet() const;

                private:

                    /**
                     * 存储位置名
                     */
                    std::string m_locationName;
                    bool m_locationNameHasBeenSet;

                    /**
                     * 存储位置URI
                     */
                    std::string m_locationUri;
                    bool m_locationUriHasBeenSet;

                    /**
                     * 存储位置描述
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 存储位置属性
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 审计信息
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LOCATIONINFO_H_
