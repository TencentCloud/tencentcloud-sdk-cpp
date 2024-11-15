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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_UNBINDCLIENTELEM_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_UNBINDCLIENTELEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 解绑客户信息
                */
                class UnbindClientElem : public AbstractModel
                {
                public:
                    UnbindClientElem();
                    ~UnbindClientElem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取解绑账号ID
                     * @return Uin 解绑账号ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置解绑账号ID
                     * @param _uin 解绑账号ID
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取状态：0:审核中；1：已解绑；2：已撤销 3：关联撤销 4: 已驳回
                     * @return Status 状态：0:审核中；1：已解绑；2：已撤销 3：关联撤销 4: 已驳回
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态：0:审核中；1：已解绑；2：已撤销 3：关联撤销 4: 已驳回
                     * @param _status 状态：0:审核中；1：已解绑；2：已撤销 3：关联撤销 4: 已驳回
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取申请时间
                     * @return ApplyTime 申请时间
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置申请时间
                     * @param _applyTime 申请时间
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取解绑/撤销时间
                     * @return ActionTime 解绑/撤销时间
                     * 
                     */
                    std::string GetActionTime() const;

                    /**
                     * 设置解绑/撤销时间
                     * @param _actionTime 解绑/撤销时间
                     * 
                     */
                    void SetActionTime(const std::string& _actionTime);

                    /**
                     * 判断参数 ActionTime 是否已赋值
                     * @return ActionTime 是否已赋值
                     * 
                     */
                    bool ActionTimeHasBeenSet() const;

                private:

                    /**
                     * 解绑账号ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 状态：0:审核中；1：已解绑；2：已撤销 3：关联撤销 4: 已驳回
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 申请时间
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * 解绑/撤销时间
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_UNBINDCLIENTELEM_H_
