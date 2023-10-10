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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYMACHINEAUTOCLEARCONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYMACHINEAUTOCLEARCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyMachineAutoClearConfig请求参数结构体
                */
                class ModifyMachineAutoClearConfigRequest : public AbstractModel
                {
                public:
                    ModifyMachineAutoClearConfigRequest();
                    ~ModifyMachineAutoClearConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取清理规则时间, 0 表示关闭, 单位为天, 最大为 30天
                     * @return ClearRule 清理规则时间, 0 表示关闭, 单位为天, 最大为 30天
                     * 
                     */
                    uint64_t GetClearRule() const;

                    /**
                     * 设置清理规则时间, 0 表示关闭, 单位为天, 最大为 30天
                     * @param _clearRule 清理规则时间, 0 表示关闭, 单位为天, 最大为 30天
                     * 
                     */
                    void SetClearRule(const uint64_t& _clearRule);

                    /**
                     * 判断参数 ClearRule 是否已赋值
                     * @return ClearRule 是否已赋值
                     * 
                     */
                    bool ClearRuleHasBeenSet() const;

                private:

                    /**
                     * 清理规则时间, 0 表示关闭, 单位为天, 最大为 30天
                     */
                    uint64_t m_clearRule;
                    bool m_clearRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYMACHINEAUTOCLEARCONFIGREQUEST_H_
