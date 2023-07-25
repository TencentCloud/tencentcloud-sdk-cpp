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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/AttackLogInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * SearchAttackLog返回参数结构体
                */
                class SearchAttackLogResponse : public AbstractModel
                {
                public:
                    SearchAttackLogResponse();
                    ~SearchAttackLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前返回的攻击日志条数
                     * @return Count 当前返回的攻击日志条数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取接口升级，此字段无效，默认返回空字符串
                     * @return Context 接口升级，此字段无效，默认返回空字符串
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取攻击日志数组条目内容
                     * @return Data 攻击日志数组条目内容
                     * 
                     */
                    std::vector<AttackLogInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取CLS接口返回内容
                     * @return ListOver CLS接口返回内容
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取CLS接口返回内容，标志是否启动新版本索引
                     * @return SqlFlag CLS接口返回内容，标志是否启动新版本索引
                     * 
                     */
                    bool GetSqlFlag() const;

                    /**
                     * 判断参数 SqlFlag 是否已赋值
                     * @return SqlFlag 是否已赋值
                     * 
                     */
                    bool SqlFlagHasBeenSet() const;

                private:

                    /**
                     * 当前返回的攻击日志条数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 接口升级，此字段无效，默认返回空字符串
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 攻击日志数组条目内容
                     */
                    std::vector<AttackLogInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * CLS接口返回内容
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * CLS接口返回内容，标志是否启动新版本索引
                     */
                    bool m_sqlFlag;
                    bool m_sqlFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGRESPONSE_H_
