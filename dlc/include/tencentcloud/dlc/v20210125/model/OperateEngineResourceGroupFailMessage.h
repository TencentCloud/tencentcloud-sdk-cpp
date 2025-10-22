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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_OPERATEENGINERESOURCEGROUPFAILMESSAGE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_OPERATEENGINERESOURCEGROUPFAILMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 操作资源组，返回的操作失败信息
                */
                class OperateEngineResourceGroupFailMessage : public AbstractModel
                {
                public:
                    OperateEngineResourceGroupFailMessage();
                    ~OperateEngineResourceGroupFailMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎资源组名称
                     * @return EngineResourceGroupName 引擎资源组名称
                     * 
                     */
                    std::string GetEngineResourceGroupName() const;

                    /**
                     * 设置引擎资源组名称
                     * @param _engineResourceGroupName 引擎资源组名称
                     * 
                     */
                    void SetEngineResourceGroupName(const std::string& _engineResourceGroupName);

                    /**
                     * 判断参数 EngineResourceGroupName 是否已赋值
                     * @return EngineResourceGroupName 是否已赋值
                     * 
                     */
                    bool EngineResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取操作失败的提示信息
                     * @return FailMessage 操作失败的提示信息
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置操作失败的提示信息
                     * @param _failMessage 操作失败的提示信息
                     * 
                     */
                    void SetFailMessage(const std::string& _failMessage);

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                private:

                    /**
                     * 引擎资源组名称
                     */
                    std::string m_engineResourceGroupName;
                    bool m_engineResourceGroupNameHasBeenSet;

                    /**
                     * 操作失败的提示信息
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_OPERATEENGINERESOURCEGROUPFAILMESSAGE_H_
