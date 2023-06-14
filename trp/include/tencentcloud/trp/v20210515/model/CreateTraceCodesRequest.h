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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CREATETRACECODESREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CREATETRACECODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/CodeItem.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * CreateTraceCodes请求参数结构体
                */
                class CreateTraceCodesRequest : public AbstractModel
                {
                public:
                    CreateTraceCodesRequest();
                    ~CreateTraceCodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批次ID
                     * @return BatchId 批次ID
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID
                     * @param _batchId 批次ID
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取码
                     * @return Codes 码
                     * 
                     */
                    std::vector<CodeItem> GetCodes() const;

                    /**
                     * 设置码
                     * @param _codes 码
                     * 
                     */
                    void SetCodes(const std::vector<CodeItem>& _codes);

                    /**
                     * 判断参数 Codes 是否已赋值
                     * @return Codes 是否已赋值
                     * 
                     */
                    bool CodesHasBeenSet() const;

                    /**
                     * 获取码绑定激活策略，默认  0
0: 传什么码就激活什么码
1: 层级码 + 层级子码
                     * @return CodeType 码绑定激活策略，默认  0
0: 传什么码就激活什么码
1: 层级码 + 层级子码
                     * 
                     */
                    uint64_t GetCodeType() const;

                    /**
                     * 设置码绑定激活策略，默认  0
0: 传什么码就激活什么码
1: 层级码 + 层级子码
                     * @param _codeType 码绑定激活策略，默认  0
0: 传什么码就激活什么码
1: 层级码 + 层级子码
                     * 
                     */
                    void SetCodeType(const uint64_t& _codeType);

                    /**
                     * 判断参数 CodeType 是否已赋值
                     * @return CodeType 是否已赋值
                     * 
                     */
                    bool CodeTypeHasBeenSet() const;

                    /**
                     * 获取错误检查类型，默认 0
0: 没有新导入码时正常返回
1: 没有新导入码时报错，并返回没有导入成功的原因
                     * @return CheckType 错误检查类型，默认 0
0: 没有新导入码时正常返回
1: 没有新导入码时报错，并返回没有导入成功的原因
                     * 
                     */
                    uint64_t GetCheckType() const;

                    /**
                     * 设置错误检查类型，默认 0
0: 没有新导入码时正常返回
1: 没有新导入码时报错，并返回没有导入成功的原因
                     * @param _checkType 错误检查类型，默认 0
0: 没有新导入码时正常返回
1: 没有新导入码时报错，并返回没有导入成功的原因
                     * 
                     */
                    void SetCheckType(const uint64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                private:

                    /**
                     * 批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 码
                     */
                    std::vector<CodeItem> m_codes;
                    bool m_codesHasBeenSet;

                    /**
                     * 码绑定激活策略，默认  0
0: 传什么码就激活什么码
1: 层级码 + 层级子码
                     */
                    uint64_t m_codeType;
                    bool m_codeTypeHasBeenSet;

                    /**
                     * 错误检查类型，默认 0
0: 没有新导入码时正常返回
1: 没有新导入码时报错，并返回没有导入成功的原因
                     */
                    uint64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CREATETRACECODESREQUEST_H_
