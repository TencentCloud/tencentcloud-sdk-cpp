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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYDATAENGINEDESCRIPTIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYDATAENGINEDESCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDataEngineDescription请求参数结构体
                */
                class ModifyDataEngineDescriptionRequest : public AbstractModel
                {
                public:
                    ModifyDataEngineDescriptionRequest();
                    ~ModifyDataEngineDescriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改的引擎的名称
                     * @return DataEngineName 要修改的引擎的名称
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置要修改的引擎的名称
                     * @param _dataEngineName 要修改的引擎的名称
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取引擎的描述信息，最大长度为250
                     * @return Message 引擎的描述信息，最大长度为250
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置引擎的描述信息，最大长度为250
                     * @param _message 引擎的描述信息，最大长度为250
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 要修改的引擎的名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 引擎的描述信息，最大长度为250
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYDATAENGINEDESCRIPTIONREQUEST_H_
