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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYDEVICEACTIONREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYDEVICEACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * ModifyDeviceAction请求参数结构体
                */
                class ModifyDeviceActionRequest : public AbstractModel
                {
                public:
                    ModifyDeviceActionRequest();
                    ~ModifyDeviceActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取如果设备处于休眠状态，是否唤醒设备
                     * @return Wakeup 如果设备处于休眠状态，是否唤醒设备
                     * 
                     */
                    bool GetWakeup() const;

                    /**
                     * 设置如果设备处于休眠状态，是否唤醒设备
                     * @param _wakeup 如果设备处于休眠状态，是否唤醒设备
                     * 
                     */
                    void SetWakeup(const bool& _wakeup);

                    /**
                     * 判断参数 Wakeup 是否已赋值
                     * @return Wakeup 是否已赋值
                     * 
                     */
                    bool WakeupHasBeenSet() const;

                    /**
                     * 获取物模型的分支路径
                     * @return Branch 物模型的分支路径
                     * 
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置物模型的分支路径
                     * @param _branch 物模型的分支路径
                     * 
                     */
                    void SetBranch(const std::string& _branch);

                    /**
                     * 判断参数 Branch 是否已赋值
                     * @return Branch 是否已赋值
                     * 
                     */
                    bool BranchHasBeenSet() const;

                    /**
                     * 获取写入的物模型数据，如果是json需要转义成字符串
                     * @return Value 写入的物模型数据，如果是json需要转义成字符串
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置写入的物模型数据，如果是json需要转义成字符串
                     * @param _value 写入的物模型数据，如果是json需要转义成字符串
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Value字段的类型是否为数值（float、int）
                     * @return IsNum Value字段的类型是否为数值（float、int）
                     * 
                     */
                    bool GetIsNum() const;

                    /**
                     * 设置Value字段的类型是否为数值（float、int）
                     * @param _isNum Value字段的类型是否为数值（float、int）
                     * 
                     */
                    void SetIsNum(const bool& _isNum);

                    /**
                     * 判断参数 IsNum 是否已赋值
                     * @return IsNum 是否已赋值
                     * 
                     */
                    bool IsNumHasBeenSet() const;

                private:

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 如果设备处于休眠状态，是否唤醒设备
                     */
                    bool m_wakeup;
                    bool m_wakeupHasBeenSet;

                    /**
                     * 物模型的分支路径
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                    /**
                     * 写入的物模型数据，如果是json需要转义成字符串
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Value字段的类型是否为数值（float、int）
                     */
                    bool m_isNum;
                    bool m_isNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYDEVICEACTIONREQUEST_H_
