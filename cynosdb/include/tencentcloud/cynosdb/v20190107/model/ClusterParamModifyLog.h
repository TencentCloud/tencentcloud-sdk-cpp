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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERPARAMMODIFYLOG_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERPARAMMODIFYLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 参数修改记录
                */
                class ClusterParamModifyLog : public AbstractModel
                {
                public:
                    ClusterParamModifyLog();
                    ~ClusterParamModifyLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名称
                     * @return ParamName 参数名称
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名称
                     * @param ParamName 参数名称
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取当前值
                     * @return CurrentValue 当前值
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置当前值
                     * @param CurrentValue 当前值
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取修改后的值
                     * @return UpdateValue 修改后的值
                     */
                    std::string GetUpdateValue() const;

                    /**
                     * 设置修改后的值
                     * @param UpdateValue 修改后的值
                     */
                    void SetUpdateValue(const std::string& _updateValue);

                    /**
                     * 判断参数 UpdateValue 是否已赋值
                     * @return UpdateValue 是否已赋值
                     */
                    bool UpdateValueHasBeenSet() const;

                    /**
                     * 获取修改状态
                     * @return Status 修改状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置修改状态
                     * @param Status 修改状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 参数名称
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 当前值
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 修改后的值
                     */
                    std::string m_updateValue;
                    bool m_updateValueHasBeenSet;

                    /**
                     * 修改状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERPARAMMODIFYLOG_H_
