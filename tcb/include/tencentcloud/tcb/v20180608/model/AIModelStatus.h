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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_AIMODELSTATUS_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_AIMODELSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 控制模型启用和停止
                */
                class AIModelStatus : public AbstractModel
                {
                public:
                    AIModelStatus();
                    ~AIModelStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型名称</p>
                     * @return Model <p>模型名称</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _model <p>模型名称</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>开关状态</p><p>枚举值：</p><ul><li>ENABLE： 打开模型</li><li>DISABLE： 关闭模型</li></ul>
                     * @return Status <p>开关状态</p><p>枚举值：</p><ul><li>ENABLE： 打开模型</li><li>DISABLE： 关闭模型</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>开关状态</p><p>枚举值：</p><ul><li>ENABLE： 打开模型</li><li>DISABLE： 关闭模型</li></ul>
                     * @param _status <p>开关状态</p><p>枚举值：</p><ul><li>ENABLE： 打开模型</li><li>DISABLE： 关闭模型</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>开关状态</p><p>枚举值：</p><ul><li>ENABLE： 打开模型</li><li>DISABLE： 关闭模型</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_AIMODELSTATUS_H_
