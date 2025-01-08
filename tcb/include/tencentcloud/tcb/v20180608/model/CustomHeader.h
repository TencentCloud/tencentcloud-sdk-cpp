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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CUSTOMHEADER_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CUSTOMHEADER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CustomRequestToAdd.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 安全网关自定义头部
                */
                class CustomHeader : public AbstractModel
                {
                public:
                    CustomHeader();
                    ~CustomHeader() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求添加头部配置
                     * @return RequestToAddList 请求添加头部配置
                     * 
                     */
                    std::vector<CustomRequestToAdd> GetRequestToAddList() const;

                    /**
                     * 设置请求添加头部配置
                     * @param _requestToAddList 请求添加头部配置
                     * 
                     */
                    void SetRequestToAddList(const std::vector<CustomRequestToAdd>& _requestToAddList);

                    /**
                     * 判断参数 RequestToAddList 是否已赋值
                     * @return RequestToAddList 是否已赋值
                     * 
                     */
                    bool RequestToAddListHasBeenSet() const;

                private:

                    /**
                     * 请求添加头部配置
                     */
                    std::vector<CustomRequestToAdd> m_requestToAddList;
                    bool m_requestToAddListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CUSTOMHEADER_H_
