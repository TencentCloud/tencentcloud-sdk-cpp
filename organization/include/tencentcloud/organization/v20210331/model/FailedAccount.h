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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_FAILEDACCOUNT_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_FAILEDACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 失败账号信息
                */
                class FailedAccount : public AbstractModel
                {
                public:
                    FailedAccount();
                    ~FailedAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>下发失败的成员账号 UIN</p>
                     * @return TargetUin <p>下发失败的成员账号 UIN</p>
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置<p>下发失败的成员账号 UIN</p>
                     * @param _targetUin <p>下发失败的成员账号 UIN</p>
                     * 
                     */
                    void SetTargetUin(const int64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                    /**
                     * 获取<p>下发失败的成员账号名</p>
                     * @return TargetName <p>下发失败的成员账号名</p>
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置<p>下发失败的成员账号名</p>
                     * @param _targetName <p>下发失败的成员账号名</p>
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                private:

                    /**
                     * <p>下发失败的成员账号 UIN</p>
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                    /**
                     * <p>下发失败的成员账号名</p>
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_FAILEDACCOUNT_H_
