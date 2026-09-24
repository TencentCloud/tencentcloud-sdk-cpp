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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_UNBINDVIRTUALACCOUNTDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_UNBINDVIRTUALACCOUNTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/BindVirtualAccountResultData.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 取消绑定账户虚拟组响应数据
                */
                class UnbindVirtualAccountData : public AbstractModel
                {
                public:
                    UnbindVirtualAccountData();
                    ~UnbindVirtualAccountData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>解绑失败明细（含失败原因）</p>
                     * @return FailItems <p>解绑失败明细（含失败原因）</p>
                     * 
                     */
                    std::vector<BindVirtualAccountResultData> GetFailItems() const;

                    /**
                     * 设置<p>解绑失败明细（含失败原因）</p>
                     * @param _failItems <p>解绑失败明细（含失败原因）</p>
                     * 
                     */
                    void SetFailItems(const std::vector<BindVirtualAccountResultData>& _failItems);

                    /**
                     * 判断参数 FailItems 是否已赋值
                     * @return FailItems 是否已赋值
                     * 
                     */
                    bool FailItemsHasBeenSet() const;

                    /**
                     * 获取<p>解绑成功明细（含幂等场景：本就未绑定的账号也归入成功）</p>
                     * @return SuccessItems <p>解绑成功明细（含幂等场景：本就未绑定的账号也归入成功）</p>
                     * 
                     */
                    std::vector<BindVirtualAccountResultData> GetSuccessItems() const;

                    /**
                     * 设置<p>解绑成功明细（含幂等场景：本就未绑定的账号也归入成功）</p>
                     * @param _successItems <p>解绑成功明细（含幂等场景：本就未绑定的账号也归入成功）</p>
                     * 
                     */
                    void SetSuccessItems(const std::vector<BindVirtualAccountResultData>& _successItems);

                    /**
                     * 判断参数 SuccessItems 是否已赋值
                     * @return SuccessItems 是否已赋值
                     * 
                     */
                    bool SuccessItemsHasBeenSet() const;

                private:

                    /**
                     * <p>解绑失败明细（含失败原因）</p>
                     */
                    std::vector<BindVirtualAccountResultData> m_failItems;
                    bool m_failItemsHasBeenSet;

                    /**
                     * <p>解绑成功明细（含幂等场景：本就未绑定的账号也归入成功）</p>
                     */
                    std::vector<BindVirtualAccountResultData> m_successItems;
                    bool m_successItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_UNBINDVIRTUALACCOUNTDATA_H_
