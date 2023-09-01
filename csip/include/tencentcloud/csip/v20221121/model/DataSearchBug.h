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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DATASEARCHBUG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DATASEARCHBUG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BugInfoDetail.h>
#include <tencentcloud/csip/v20221121/model/AssetInfoDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 漏洞和资产信息
                */
                class DataSearchBug : public AbstractModel
                {
                public:
                    DataSearchBug();
                    ~DataSearchBug() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回查询状态
                     * @return StateCode 返回查询状态
                     * 
                     */
                    std::string GetStateCode() const;

                    /**
                     * 设置返回查询状态
                     * @param _stateCode 返回查询状态
                     * 
                     */
                    void SetStateCode(const std::string& _stateCode);

                    /**
                     * 判断参数 StateCode 是否已赋值
                     * @return StateCode 是否已赋值
                     * 
                     */
                    bool StateCodeHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataBug 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BugInfoDetail> GetDataBug() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataBug 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataBug(const std::vector<BugInfoDetail>& _dataBug);

                    /**
                     * 判断参数 DataBug 是否已赋值
                     * @return DataBug 是否已赋值
                     * 
                     */
                    bool DataBugHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataAsset 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AssetInfoDetail> GetDataAsset() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataAsset 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataAsset(const std::vector<AssetInfoDetail>& _dataAsset);

                    /**
                     * 判断参数 DataAsset 是否已赋值
                     * @return DataAsset 是否已赋值
                     * 
                     */
                    bool DataAssetHasBeenSet() const;

                    /**
                     * 获取true支持扫描。false不支持扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VSSScan true支持扫描。false不支持扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetVSSScan() const;

                    /**
                     * 设置true支持扫描。false不支持扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vSSScan true支持扫描。false不支持扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVSSScan(const bool& _vSSScan);

                    /**
                     * 判断参数 VSSScan 是否已赋值
                     * @return VSSScan 是否已赋值
                     * 
                     */
                    bool VSSScanHasBeenSet() const;

                    /**
                     * 获取0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CWPScan 0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCWPScan() const;

                    /**
                     * 设置0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cWPScan 0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCWPScan(const std::string& _cWPScan);

                    /**
                     * 判断参数 CWPScan 是否已赋值
                     * @return CWPScan 是否已赋值
                     * 
                     */
                    bool CWPScanHasBeenSet() const;

                    /**
                     * 获取1支持虚拟补丁，0或空不支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFWPatch 1支持虚拟补丁，0或空不支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCFWPatch() const;

                    /**
                     * 设置1支持虚拟补丁，0或空不支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFWPatch 1支持虚拟补丁，0或空不支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCFWPatch(const std::string& _cFWPatch);

                    /**
                     * 判断参数 CFWPatch 是否已赋值
                     * @return CFWPatch 是否已赋值
                     * 
                     */
                    bool CFWPatchHasBeenSet() const;

                    /**
                     * 获取0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WafPatch 0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWafPatch() const;

                    /**
                     * 设置0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wafPatch 0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWafPatch(const int64_t& _wafPatch);

                    /**
                     * 判断参数 WafPatch 是否已赋值
                     * @return WafPatch 是否已赋值
                     * 
                     */
                    bool WafPatchHasBeenSet() const;

                    /**
                     * 获取0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CWPFix 0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCWPFix() const;

                    /**
                     * 设置0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cWPFix 0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCWPFix(const int64_t& _cWPFix);

                    /**
                     * 判断参数 CWPFix 是否已赋值
                     * @return CWPFix 是否已赋值
                     * 
                     */
                    bool CWPFixHasBeenSet() const;

                private:

                    /**
                     * 返回查询状态
                     */
                    std::string m_stateCode;
                    bool m_stateCodeHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BugInfoDetail> m_dataBug;
                    bool m_dataBugHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetInfoDetail> m_dataAsset;
                    bool m_dataAssetHasBeenSet;

                    /**
                     * true支持扫描。false不支持扫描
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_vSSScan;
                    bool m_vSSScanHasBeenSet;

                    /**
                     * 0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cWPScan;
                    bool m_cWPScanHasBeenSet;

                    /**
                     * 1支持虚拟补丁，0或空不支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cFWPatch;
                    bool m_cFWPatchHasBeenSet;

                    /**
                     * 0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_wafPatch;
                    bool m_wafPatchHasBeenSet;

                    /**
                     * 0不支持，1支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cWPFix;
                    bool m_cWPFixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DATASEARCHBUG_H_
