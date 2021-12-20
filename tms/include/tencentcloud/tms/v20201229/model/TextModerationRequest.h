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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_TEXTMODERATIONREQUEST_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_TEXTMODERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/User.h>
#include <tencentcloud/tms/v20201229/model/Device.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * TextModeration请求参数结构体
                */
                class TextModerationRequest : public AbstractModel
                {
                public:
                    TextModerationRequest();
                    ~TextModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取该字段表示待检测对象的文本内容，长度不能超过10000（按unicode编码计算）
                     * @return Content 该字段表示待检测对象的文本内容，长度不能超过10000（按unicode编码计算）
                     */
                    std::string GetContent() const;

                    /**
                     * 设置该字段表示待检测对象的文本内容，长度不能超过10000（按unicode编码计算）
                     * @param Content 该字段表示待检测对象的文本内容，长度不能超过10000（按unicode编码计算）
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype
                     * @return BizType 该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype
                     * @param BizType 该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**
                     * @return DataId 该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**
                     * @param DataId 该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取该字段表示待检测对象对应的用户相关信息，传入后可便于甄别相应违规风险用户
                     * @return User 该字段表示待检测对象对应的用户相关信息，传入后可便于甄别相应违规风险用户
                     */
                    User GetUser() const;

                    /**
                     * 设置该字段表示待检测对象对应的用户相关信息，传入后可便于甄别相应违规风险用户
                     * @param User 该字段表示待检测对象对应的用户相关信息，传入后可便于甄别相应违规风险用户
                     */
                    void SetUser(const User& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取该字段表示待检测对象对应的设备相关信息，传入后可便于甄别相应违规风险设备
                     * @return Device 该字段表示待检测对象对应的设备相关信息，传入后可便于甄别相应违规风险设备
                     */
                    Device GetDevice() const;

                    /**
                     * 设置该字段表示待检测对象对应的设备相关信息，传入后可便于甄别相应违规风险设备
                     * @param Device 该字段表示待检测对象对应的设备相关信息，传入后可便于甄别相应违规风险设备
                     */
                    void SetDevice(const Device& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     */
                    bool DeviceHasBeenSet() const;

                private:

                    /**
                     * 该字段表示待检测对象的文本内容，长度不能超过10000（按unicode编码计算）
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 该字段表示待检测对象对应的用户相关信息，传入后可便于甄别相应违规风险用户
                     */
                    User m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 该字段表示待检测对象对应的设备相关信息，传入后可便于甄别相应违规风险设备
                     */
                    Device m_device;
                    bool m_deviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_TEXTMODERATIONREQUEST_H_
