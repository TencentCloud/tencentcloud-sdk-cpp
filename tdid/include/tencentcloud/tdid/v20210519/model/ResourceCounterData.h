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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_RESOURCECOUNTERDATA_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_RESOURCECOUNTERDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 资源计数统计数据
                */
                class ResourceCounterData : public AbstractModel
                {
                public:
                    ResourceCounterData();
                    ~ResourceCounterData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DID总数
                     * @return DidCnt DID总数
                     * 
                     */
                    uint64_t GetDidCnt() const;

                    /**
                     * 设置DID总数
                     * @param _didCnt DID总数
                     * 
                     */
                    void SetDidCnt(const uint64_t& _didCnt);

                    /**
                     * 判断参数 DidCnt 是否已赋值
                     * @return DidCnt 是否已赋值
                     * 
                     */
                    bool DidCntHasBeenSet() const;

                    /**
                     * 获取VC总数
                     * @return VCCnt VC总数
                     * 
                     */
                    uint64_t GetVCCnt() const;

                    /**
                     * 设置VC总数
                     * @param _vCCnt VC总数
                     * 
                     */
                    void SetVCCnt(const uint64_t& _vCCnt);

                    /**
                     * 判断参数 VCCnt 是否已赋值
                     * @return VCCnt 是否已赋值
                     * 
                     */
                    bool VCCntHasBeenSet() const;

                    /**
                     * 获取CPT总数
                     * @return CPTCnt CPT总数
                     * 
                     */
                    uint64_t GetCPTCnt() const;

                    /**
                     * 设置CPT总数
                     * @param _cPTCnt CPT总数
                     * 
                     */
                    void SetCPTCnt(const uint64_t& _cPTCnt);

                    /**
                     * 判断参数 CPTCnt 是否已赋值
                     * @return CPTCnt 是否已赋值
                     * 
                     */
                    bool CPTCntHasBeenSet() const;

                    /**
                     * 获取 VC验证总数 
                     * @return VerifyCnt  VC验证总数 
                     * 
                     */
                    uint64_t GetVerifyCnt() const;

                    /**
                     * 设置 VC验证总数 
                     * @param _verifyCnt  VC验证总数 
                     * 
                     */
                    void SetVerifyCnt(const uint64_t& _verifyCnt);

                    /**
                     * 判断参数 VerifyCnt 是否已赋值
                     * @return VerifyCnt 是否已赋值
                     * 
                     */
                    bool VerifyCntHasBeenSet() const;

                    /**
                     * 获取权威机构数量
                     * @return AuthCnt 权威机构数量
                     * 
                     */
                    uint64_t GetAuthCnt() const;

                    /**
                     * 设置权威机构数量
                     * @param _authCnt 权威机构数量
                     * 
                     */
                    void SetAuthCnt(const uint64_t& _authCnt);

                    /**
                     * 判断参数 AuthCnt 是否已赋值
                     * @return AuthCnt 是否已赋值
                     * 
                     */
                    bool AuthCntHasBeenSet() const;

                private:

                    /**
                     * DID总数
                     */
                    uint64_t m_didCnt;
                    bool m_didCntHasBeenSet;

                    /**
                     * VC总数
                     */
                    uint64_t m_vCCnt;
                    bool m_vCCntHasBeenSet;

                    /**
                     * CPT总数
                     */
                    uint64_t m_cPTCnt;
                    bool m_cPTCntHasBeenSet;

                    /**
                     *  VC验证总数 
                     */
                    uint64_t m_verifyCnt;
                    bool m_verifyCntHasBeenSet;

                    /**
                     * 权威机构数量
                     */
                    uint64_t m_authCnt;
                    bool m_authCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_RESOURCECOUNTERDATA_H_
