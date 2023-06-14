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

#ifndef TENCENTCLOUD_VM_V20200709_MODEL_EVILCOUNT_H_
#define TENCENTCLOUD_VM_V20200709_MODEL_EVILCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20200709
        {
            namespace Model
            {
                /**
                * 违规数据分布
                */
                class EvilCount : public AbstractModel
                {
                public:
                    EvilCount();
                    ~EvilCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取违规类型：
Terror	24001
Porn	20002
Polity	20001
Ad	20105
Abuse	20007	
Illegal	20006	
Spam	25001	
Moan	26001
                     * @return EvilType 违规类型：
Terror	24001
Porn	20002
Polity	20001
Ad	20105
Abuse	20007	
Illegal	20006	
Spam	25001	
Moan	26001
                     * 
                     */
                    std::string GetEvilType() const;

                    /**
                     * 设置违规类型：
Terror	24001
Porn	20002
Polity	20001
Ad	20105
Abuse	20007	
Illegal	20006	
Spam	25001	
Moan	26001
                     * @param _evilType 违规类型：
Terror	24001
Porn	20002
Polity	20001
Ad	20105
Abuse	20007	
Illegal	20006	
Spam	25001	
Moan	26001
                     * 
                     */
                    void SetEvilType(const std::string& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     * 
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取分布类型总量
                     * @return Count 分布类型总量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置分布类型总量
                     * @param _count 分布类型总量
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 违规类型：
Terror	24001
Porn	20002
Polity	20001
Ad	20105
Abuse	20007	
Illegal	20006	
Spam	25001	
Moan	26001
                     */
                    std::string m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 分布类型总量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20200709_MODEL_EVILCOUNT_H_
