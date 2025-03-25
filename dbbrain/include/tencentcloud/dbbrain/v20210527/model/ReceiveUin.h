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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_RECEIVEUIN_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_RECEIVEUIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 接收用户
                */
                class ReceiveUin : public AbstractModel
                {
                public:
                    ReceiveUin();
                    ~ReceiveUin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名
                     * @return UinName 用户名
                     * 
                     */
                    std::string GetUinName() const;

                    /**
                     * 设置用户名
                     * @param _uinName 用户名
                     * 
                     */
                    void SetUinName(const std::string& _uinName);

                    /**
                     * 判断参数 UinName 是否已赋值
                     * @return UinName 是否已赋值
                     * 
                     */
                    bool UinNameHasBeenSet() const;

                    /**
                     * 获取用户id
                     * @return Uin 用户id
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户id
                     * @param _uin 用户id
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_uinName;
                    bool m_uinNameHasBeenSet;

                    /**
                     * 用户id
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_RECEIVEUIN_H_
