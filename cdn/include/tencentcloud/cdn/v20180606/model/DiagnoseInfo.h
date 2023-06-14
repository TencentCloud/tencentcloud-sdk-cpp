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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSEINFO_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/DiagnoseList.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 诊断信息
                */
                class DiagnoseInfo : public AbstractModel
                {
                public:
                    DiagnoseInfo();
                    ~DiagnoseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待诊断的URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiagnoseUrl 待诊断的URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiagnoseUrl() const;

                    /**
                     * 设置待诊断的URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diagnoseUrl 待诊断的URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiagnoseUrl(const std::string& _diagnoseUrl);

                    /**
                     * 判断参数 DiagnoseUrl 是否已赋值
                     * @return DiagnoseUrl 是否已赋值
                     * 
                     */
                    bool DiagnoseUrlHasBeenSet() const;

                    /**
                     * 获取由系统生成的诊断链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiagnoseLink 由系统生成的诊断链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiagnoseLink() const;

                    /**
                     * 设置由系统生成的诊断链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diagnoseLink 由系统生成的诊断链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiagnoseLink(const std::string& _diagnoseLink);

                    /**
                     * 判断参数 DiagnoseLink 是否已赋值
                     * @return DiagnoseLink 是否已赋值
                     * 
                     */
                    bool DiagnoseLinkHasBeenSet() const;

                    /**
                     * 获取诊断创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 诊断创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置诊断创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 诊断创建时间。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取诊断链接过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireDate 诊断链接过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置诊断链接过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireDate 诊断链接过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireDate(const std::string& _expireDate);

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                    /**
                     * 获取诊断链接当前访问次数，一个诊断链接最多可访问10次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VisitCount 诊断链接当前访问次数，一个诊断链接最多可访问10次。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVisitCount() const;

                    /**
                     * 设置诊断链接当前访问次数，一个诊断链接最多可访问10次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _visitCount 诊断链接当前访问次数，一个诊断链接最多可访问10次。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVisitCount(const int64_t& _visitCount);

                    /**
                     * 判断参数 VisitCount 是否已赋值
                     * @return VisitCount 是否已赋值
                     * 
                     */
                    bool VisitCountHasBeenSet() const;

                    /**
                     * 获取访问诊断链接的客户端简易信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientList 访问诊断链接的客户端简易信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiagnoseList> GetClientList() const;

                    /**
                     * 设置访问诊断链接的客户端简易信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientList 访问诊断链接的客户端简易信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientList(const std::vector<DiagnoseList>& _clientList);

                    /**
                     * 判断参数 ClientList 是否已赋值
                     * @return ClientList 是否已赋值
                     * 
                     */
                    bool ClientListHasBeenSet() const;

                    /**
                     * 获取域名加速区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area 域名加速区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置域名加速区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _area 域名加速区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 待诊断的URL。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diagnoseUrl;
                    bool m_diagnoseUrlHasBeenSet;

                    /**
                     * 由系统生成的诊断链接。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diagnoseLink;
                    bool m_diagnoseLinkHasBeenSet;

                    /**
                     * 诊断创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 诊断链接过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                    /**
                     * 诊断链接当前访问次数，一个诊断链接最多可访问10次。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_visitCount;
                    bool m_visitCountHasBeenSet;

                    /**
                     * 访问诊断链接的客户端简易信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiagnoseList> m_clientList;
                    bool m_clientListHasBeenSet;

                    /**
                     * 域名加速区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSEINFO_H_
