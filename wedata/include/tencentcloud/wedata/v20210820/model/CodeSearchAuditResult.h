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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHAUDITRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHAUDITRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CodeSearchAuditInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 代码搜索审计响应信息
                */
                class CodeSearchAuditResult : public AbstractModel
                {
                public:
                    CodeSearchAuditResult();
                    ~CodeSearchAuditResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代码搜索审计信息列表
                     * @return CodeSearchAuditInfo 代码搜索审计信息列表
                     * 
                     */
                    std::vector<CodeSearchAuditInfo> GetCodeSearchAuditInfo() const;

                    /**
                     * 设置代码搜索审计信息列表
                     * @param _codeSearchAuditInfo 代码搜索审计信息列表
                     * 
                     */
                    void SetCodeSearchAuditInfo(const std::vector<CodeSearchAuditInfo>& _codeSearchAuditInfo);

                    /**
                     * 判断参数 CodeSearchAuditInfo 是否已赋值
                     * @return CodeSearchAuditInfo 是否已赋值
                     * 
                     */
                    bool CodeSearchAuditInfoHasBeenSet() const;

                private:

                    /**
                     * 代码搜索审计信息列表
                     */
                    std::vector<CodeSearchAuditInfo> m_codeSearchAuditInfo;
                    bool m_codeSearchAuditInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHAUDITRESULT_H_
