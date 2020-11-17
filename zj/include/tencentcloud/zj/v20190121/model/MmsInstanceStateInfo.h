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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_MMSINSTANCESTATEINFO_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_MMSINSTANCESTATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 彩信实例审核状态
                */
                class MmsInstanceStateInfo : public AbstractModel
                {
                public:
                    MmsInstanceStateInfo();
                    ~MmsInstanceStateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运营商
                     * @return Operator 运营商
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置运营商
                     * @param Operator 运营商
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取审核状态：0未审核，1审核通过，2审核拒绝
                     * @return State 审核状态：0未审核，1审核通过，2审核拒绝
                     */
                    int64_t GetState() const;

                    /**
                     * 设置审核状态：0未审核，1审核通过，2审核拒绝
                     * @param State 审核状态：0未审核，1审核通过，2审核拒绝
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 运营商
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 审核状态：0未审核，1审核通过，2审核拒绝
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_MMSINSTANCESTATEINFO_H_
