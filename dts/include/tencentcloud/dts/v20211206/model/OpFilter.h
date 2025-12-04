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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_OPFILTER_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_OPFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DdlOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DDL/DML 过滤规则
                */
                class OpFilter : public AbstractModel
                {
                public:
                    OpFilter();
                    ~OpFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DML 白名单
                     * @return OpTypes DML 白名单
                     * 
                     */
                    std::vector<std::string> GetOpTypes() const;

                    /**
                     * 设置DML 白名单
                     * @param _opTypes DML 白名单
                     * 
                     */
                    void SetOpTypes(const std::vector<std::string>& _opTypes);

                    /**
                     * 判断参数 OpTypes 是否已赋值
                     * @return OpTypes 是否已赋值
                     * 
                     */
                    bool OpTypesHasBeenSet() const;

                    /**
                     * 获取DDL 白名单
                     * @return DdlOptions DDL 白名单
                     * 
                     */
                    std::vector<DdlOption> GetDdlOptions() const;

                    /**
                     * 设置DDL 白名单
                     * @param _ddlOptions DDL 白名单
                     * 
                     */
                    void SetDdlOptions(const std::vector<DdlOption>& _ddlOptions);

                    /**
                     * 判断参数 DdlOptions 是否已赋值
                     * @return DdlOptions 是否已赋值
                     * 
                     */
                    bool DdlOptionsHasBeenSet() const;

                private:

                    /**
                     * DML 白名单
                     */
                    std::vector<std::string> m_opTypes;
                    bool m_opTypesHasBeenSet;

                    /**
                     * DDL 白名单
                     */
                    std::vector<DdlOption> m_ddlOptions;
                    bool m_ddlOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_OPFILTER_H_
