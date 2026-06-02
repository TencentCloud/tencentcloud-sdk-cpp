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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_WIZARDCONFIG_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_WIZARDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/ServiceDatabaseReqParam.h>
#include <tencentcloud/apis/v20240801/model/ServiceDatabaseRespParam.h>
#include <tencentcloud/apis/v20240801/model/ServiceDatabaseOrderParam.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * WizardConfig 向导模式配置
                */
                class WizardConfig : public AbstractModel
                {
                public:
                    WizardConfig();
                    ~WizardConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbTable <p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbTable() const;

                    /**
                     * 设置<p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbTable <p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbTable(const std::string& _dbTable);

                    /**
                     * 判断参数 DbTable 是否已赋值
                     * @return DbTable 是否已赋值
                     * 
                     */
                    bool DbTableHasBeenSet() const;

                    /**
                     * 获取<p>是否分页</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbEnablePaging <p>是否分页</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDbEnablePaging() const;

                    /**
                     * 设置<p>是否分页</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbEnablePaging <p>是否分页</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbEnablePaging(const bool& _dbEnablePaging);

                    /**
                     * 判断参数 DbEnablePaging 是否已赋值
                     * @return DbEnablePaging 是否已赋值
                     * 
                     */
                    bool DbEnablePagingHasBeenSet() const;

                    /**
                     * 获取<p>请求参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbReqParams <p>请求参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceDatabaseReqParam> GetDbReqParams() const;

                    /**
                     * 设置<p>请求参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbReqParams <p>请求参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbReqParams(const std::vector<ServiceDatabaseReqParam>& _dbReqParams);

                    /**
                     * 判断参数 DbReqParams 是否已赋值
                     * @return DbReqParams 是否已赋值
                     * 
                     */
                    bool DbReqParamsHasBeenSet() const;

                    /**
                     * 获取<p>响应参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbRespParams <p>响应参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceDatabaseRespParam> GetDbRespParams() const;

                    /**
                     * 设置<p>响应参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbRespParams <p>响应参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbRespParams(const std::vector<ServiceDatabaseRespParam>& _dbRespParams);

                    /**
                     * 判断参数 DbRespParams 是否已赋值
                     * @return DbRespParams 是否已赋值
                     * 
                     */
                    bool DbRespParamsHasBeenSet() const;

                    /**
                     * 获取<p>排序参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbOrdParams <p>排序参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceDatabaseOrderParam> GetDbOrdParams() const;

                    /**
                     * 设置<p>排序参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbOrdParams <p>排序参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbOrdParams(const std::vector<ServiceDatabaseOrderParam>& _dbOrdParams);

                    /**
                     * 判断参数 DbOrdParams 是否已赋值
                     * @return DbOrdParams 是否已赋值
                     * 
                     */
                    bool DbOrdParamsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启出参映射</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbEnableMappingResp <p>是否开启出参映射</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDbEnableMappingResp() const;

                    /**
                     * 设置<p>是否开启出参映射</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbEnableMappingResp <p>是否开启出参映射</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbEnableMappingResp(const bool& _dbEnableMappingResp);

                    /**
                     * 判断参数 DbEnableMappingResp 是否已赋值
                     * @return DbEnableMappingResp 是否已赋值
                     * 
                     */
                    bool DbEnableMappingRespHasBeenSet() const;

                private:

                    /**
                     * <p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbTable;
                    bool m_dbTableHasBeenSet;

                    /**
                     * <p>是否分页</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_dbEnablePaging;
                    bool m_dbEnablePagingHasBeenSet;

                    /**
                     * <p>请求参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceDatabaseReqParam> m_dbReqParams;
                    bool m_dbReqParamsHasBeenSet;

                    /**
                     * <p>响应参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceDatabaseRespParam> m_dbRespParams;
                    bool m_dbRespParamsHasBeenSet;

                    /**
                     * <p>排序参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceDatabaseOrderParam> m_dbOrdParams;
                    bool m_dbOrdParamsHasBeenSet;

                    /**
                     * <p>是否开启出参映射</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_dbEnableMappingResp;
                    bool m_dbEnableMappingRespHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_WIZARDCONFIG_H_
