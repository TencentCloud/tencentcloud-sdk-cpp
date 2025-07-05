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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAMHISTORY_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAMHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例参数修改历史
                */
                class InstanceParamHistory : public AbstractModel
                {
                public:
                    InstanceParamHistory();
                    ~InstanceParamHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名称。
                     * @return ParamName 参数名称。
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名称。
                     * @param _paramName 参数名称。
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取参数修改之前的值。
                     * @return PreValue 参数修改之前的值。
                     * 
                     */
                    std::string GetPreValue() const;

                    /**
                     * 设置参数修改之前的值。
                     * @param _preValue 参数修改之前的值。
                     * 
                     */
                    void SetPreValue(const std::string& _preValue);

                    /**
                     * 判断参数 PreValue 是否已赋值
                     * @return PreValue 是否已赋值
                     * 
                     */
                    bool PreValueHasBeenSet() const;

                    /**
                     * 获取参数修改之后的值。
                     * @return NewValue 参数修改之后的值。
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置参数修改之后的值。
                     * @param _newValue 参数修改之后的值。
                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                    /**
                     * 获取参数配置状态。
- 1：参数配置修改中。
- 2：参数配置修改成功。
- 3：参数配置修改失败。
                     * @return Status 参数配置状态。
- 1：参数配置修改中。
- 2：参数配置修改成功。
- 3：参数配置修改失败。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置参数配置状态。
- 1：参数配置修改中。
- 2：参数配置修改成功。
- 3：参数配置修改失败。
                     * @param _status 参数配置状态。
- 1：参数配置修改中。
- 2：参数配置修改成功。
- 3：参数配置修改失败。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取修改时间。
                     * @return ModifyTime 修改时间。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间。
                     * @param _modifyTime 修改时间。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 参数名称。
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 参数修改之前的值。
                     */
                    std::string m_preValue;
                    bool m_preValueHasBeenSet;

                    /**
                     * 参数修改之后的值。
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                    /**
                     * 参数配置状态。
- 1：参数配置修改中。
- 2：参数配置修改成功。
- 3：参数配置修改失败。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 修改时间。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAMHISTORY_H_
