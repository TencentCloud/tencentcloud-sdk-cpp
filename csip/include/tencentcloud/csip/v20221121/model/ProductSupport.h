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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PRODUCTSUPPORT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PRODUCTSUPPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 漏洞信息产品支持状态
                */
                class ProductSupport : public AbstractModel
                {
                public:
                    ProductSupport();
                    ~ProductSupport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取true支持扫描。false不支持扫描
                     * @return VSSScan true支持扫描。false不支持扫描
                     * 
                     */
                    bool GetVSSScan() const;

                    /**
                     * 设置true支持扫描。false不支持扫描
                     * @param _vSSScan true支持扫描。false不支持扫描
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
                     * @return CWPScan 0不支持，1支持
                     * 
                     */
                    std::string GetCWPScan() const;

                    /**
                     * 设置0不支持，1支持
                     * @param _cWPScan 0不支持，1支持
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
                     * @return CFWPatch 1支持虚拟补丁，0或空不支持
                     * 
                     */
                    std::string GetCFWPatch() const;

                    /**
                     * 设置1支持虚拟补丁，0或空不支持
                     * @param _cFWPatch 1支持虚拟补丁，0或空不支持
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
                     * @return WafPatch 0不支持，1支持	
                     * 
                     */
                    int64_t GetWafPatch() const;

                    /**
                     * 设置0不支持，1支持	
                     * @param _wafPatch 0不支持，1支持	
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
                     * @return CWPFix 0不支持，1支持	
                     * 
                     */
                    int64_t GetCWPFix() const;

                    /**
                     * 设置0不支持，1支持	
                     * @param _cWPFix 0不支持，1支持	
                     * 
                     */
                    void SetCWPFix(const int64_t& _cWPFix);

                    /**
                     * 判断参数 CWPFix 是否已赋值
                     * @return CWPFix 是否已赋值
                     * 
                     */
                    bool CWPFixHasBeenSet() const;

                    /**
                     * 获取cveid
                     * @return CveId cveid
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置cveid
                     * @param _cveId cveid
                     * 
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                private:

                    /**
                     * true支持扫描。false不支持扫描
                     */
                    bool m_vSSScan;
                    bool m_vSSScanHasBeenSet;

                    /**
                     * 0不支持，1支持
                     */
                    std::string m_cWPScan;
                    bool m_cWPScanHasBeenSet;

                    /**
                     * 1支持虚拟补丁，0或空不支持
                     */
                    std::string m_cFWPatch;
                    bool m_cFWPatchHasBeenSet;

                    /**
                     * 0不支持，1支持	
                     */
                    int64_t m_wafPatch;
                    bool m_wafPatchHasBeenSet;

                    /**
                     * 0不支持，1支持	
                     */
                    int64_t m_cWPFix;
                    bool m_cWPFixHasBeenSet;

                    /**
                     * cveid
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PRODUCTSUPPORT_H_
