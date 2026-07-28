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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FORWARDRECORD_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FORWARDRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 签署人的转交记录详情
                */
                class ForwardRecord : public AbstractModel
                {
                public:
                    ForwardRecord();
                    ~ForwardRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>转交人打码后的姓名</p>
                     * @return Name <p>转交人打码后的姓名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>转交人打码后的姓名</p>
                     * @param _name <p>转交人打码后的姓名</p>
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
                     * 获取<p>转交人打码后的手机号</p>
                     * @return Mobile <p>转交人打码后的手机号</p>
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置<p>转交人打码后的手机号</p>
                     * @param _mobile <p>转交人打码后的手机号</p>
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取<p>进行转交的原因</p><p>枚举值：</p><ul><li>QUIT_FORWARD： 离职转交</li><li>FORWARD： 员工操作转交</li></ul>
                     * @return ForwardType <p>进行转交的原因</p><p>枚举值：</p><ul><li>QUIT_FORWARD： 离职转交</li><li>FORWARD： 员工操作转交</li></ul>
                     * 
                     */
                    std::string GetForwardType() const;

                    /**
                     * 设置<p>进行转交的原因</p><p>枚举值：</p><ul><li>QUIT_FORWARD： 离职转交</li><li>FORWARD： 员工操作转交</li></ul>
                     * @param _forwardType <p>进行转交的原因</p><p>枚举值：</p><ul><li>QUIT_FORWARD： 离职转交</li><li>FORWARD： 员工操作转交</li></ul>
                     * 
                     */
                    void SetForwardType(const std::string& _forwardType);

                    /**
                     * 判断参数 ForwardType 是否已赋值
                     * @return ForwardType 是否已赋值
                     * 
                     */
                    bool ForwardTypeHasBeenSet() const;

                    /**
                     * 获取<p>转交的详情信息</p>
                     * @return ForwardMessage <p>转交的详情信息</p>
                     * 
                     */
                    std::string GetForwardMessage() const;

                    /**
                     * 设置<p>转交的详情信息</p>
                     * @param _forwardMessage <p>转交的详情信息</p>
                     * 
                     */
                    void SetForwardMessage(const std::string& _forwardMessage);

                    /**
                     * 判断参数 ForwardMessage 是否已赋值
                     * @return ForwardMessage 是否已赋值
                     * 
                     */
                    bool ForwardMessageHasBeenSet() const;

                    /**
                     * 获取<p>转交时间</p><p>单位：时间戳（秒级）</p>
                     * @return ForwardTime <p>转交时间</p><p>单位：时间戳（秒级）</p>
                     * 
                     */
                    int64_t GetForwardTime() const;

                    /**
                     * 设置<p>转交时间</p><p>单位：时间戳（秒级）</p>
                     * @param _forwardTime <p>转交时间</p><p>单位：时间戳（秒级）</p>
                     * 
                     */
                    void SetForwardTime(const int64_t& _forwardTime);

                    /**
                     * 判断参数 ForwardTime 是否已赋值
                     * @return ForwardTime 是否已赋值
                     * 
                     */
                    bool ForwardTimeHasBeenSet() const;

                private:

                    /**
                     * <p>转交人打码后的姓名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>转交人打码后的手机号</p>
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * <p>进行转交的原因</p><p>枚举值：</p><ul><li>QUIT_FORWARD： 离职转交</li><li>FORWARD： 员工操作转交</li></ul>
                     */
                    std::string m_forwardType;
                    bool m_forwardTypeHasBeenSet;

                    /**
                     * <p>转交的详情信息</p>
                     */
                    std::string m_forwardMessage;
                    bool m_forwardMessageHasBeenSet;

                    /**
                     * <p>转交时间</p><p>单位：时间戳（秒级）</p>
                     */
                    int64_t m_forwardTime;
                    bool m_forwardTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FORWARDRECORD_H_
