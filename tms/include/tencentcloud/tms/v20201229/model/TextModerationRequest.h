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
                     * 获取该字段表示待检测对象的文本内容，文本需要按utf-8格式编码，长度不能超过10000个字符（按unicode编码计算），并进行 Base64加密
                     * @return Content 该字段表示待检测对象的文本内容，文本需要按utf-8格式编码，长度不能超过10000个字符（按unicode编码计算），并进行 Base64加密
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置该字段表示待检测对象的文本内容，文本需要按utf-8格式编码，长度不能超过10000个字符（按unicode编码计算），并进行 Base64加密
                     * @param _content 该字段表示待检测对象的文本内容，文本需要按utf-8格式编码，长度不能超过10000个字符（按unicode编码计算），并进行 Base64加密
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取该字段表示使用的策略的具体编号，该字段需要先在[内容安全控制台](#https://console.cloud.tencent.com/cms/clouds/manage)中配置，控制台访问地址：。
备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * @return BizType 该字段表示使用的策略的具体编号，该字段需要先在[内容安全控制台](#https://console.cloud.tencent.com/cms/clouds/manage)中配置，控制台访问地址：。
备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置该字段表示使用的策略的具体编号，该字段需要先在[内容安全控制台](#https://console.cloud.tencent.com/cms/clouds/manage)中配置，控制台访问地址：。
备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * @param _bizType 该字段表示使用的策略的具体编号，该字段需要先在[内容安全控制台](#https://console.cloud.tencent.com/cms/clouds/manage)中配置，控制台访问地址：。
备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**
                     * @return DataId 该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**
                     * @param _dataId 该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取该字段表示待检测对象对应的用户相关信息，传入后可便于甄别相应违规风险用户
                     * @return User 该字段表示待检测对象对应的用户相关信息，传入后可便于甄别相应违规风险用户
                     * 
                     */
                    User GetUser() const;

                    /**
                     * 设置该字段表示待检测对象对应的用户相关信息，传入后可便于甄别相应违规风险用户
                     * @param _user 该字段表示待检测对象对应的用户相关信息，传入后可便于甄别相应违规风险用户
                     * 
                     */
                    void SetUser(const User& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取该字段表示待检测对象对应的设备相关信息，传入后可便于甄别相应违规风险设备
                     * @return Device 该字段表示待检测对象对应的设备相关信息，传入后可便于甄别相应违规风险设备
                     * 
                     */
                    Device GetDevice() const;

                    /**
                     * 设置该字段表示待检测对象对应的设备相关信息，传入后可便于甄别相应违规风险设备
                     * @param _device 该字段表示待检测对象对应的设备相关信息，传入后可便于甄别相应违规风险设备
                     * 
                     */
                    void SetDevice(const Device& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取表示Content的原始语种，枚举值包括 "en" 和 "zh"。其中，"en" 表示英文，"zh" 表示中文。非中文场景的处理耗时较高，具体情况取决于送审文本长度，非中文场景需[反馈工单](#https://console.cloud.tencent.com/workorder/category?level1_id=141&level2_id=1287&source=14&data_title=%E6%96%87%E6%9C%AC%E5%86%85%E5%AE%B9%E5%AE%89%E5%85%A8&step=1)确认。
                     * @return SourceLanguage 表示Content的原始语种，枚举值包括 "en" 和 "zh"。其中，"en" 表示英文，"zh" 表示中文。非中文场景的处理耗时较高，具体情况取决于送审文本长度，非中文场景需[反馈工单](#https://console.cloud.tencent.com/workorder/category?level1_id=141&level2_id=1287&source=14&data_title=%E6%96%87%E6%9C%AC%E5%86%85%E5%AE%B9%E5%AE%89%E5%85%A8&step=1)确认。
                     * 
                     */
                    std::string GetSourceLanguage() const;

                    /**
                     * 设置表示Content的原始语种，枚举值包括 "en" 和 "zh"。其中，"en" 表示英文，"zh" 表示中文。非中文场景的处理耗时较高，具体情况取决于送审文本长度，非中文场景需[反馈工单](#https://console.cloud.tencent.com/workorder/category?level1_id=141&level2_id=1287&source=14&data_title=%E6%96%87%E6%9C%AC%E5%86%85%E5%AE%B9%E5%AE%89%E5%85%A8&step=1)确认。
                     * @param _sourceLanguage 表示Content的原始语种，枚举值包括 "en" 和 "zh"。其中，"en" 表示英文，"zh" 表示中文。非中文场景的处理耗时较高，具体情况取决于送审文本长度，非中文场景需[反馈工单](#https://console.cloud.tencent.com/workorder/category?level1_id=141&level2_id=1287&source=14&data_title=%E6%96%87%E6%9C%AC%E5%86%85%E5%AE%B9%E5%AE%89%E5%85%A8&step=1)确认。
                     * 
                     */
                    void SetSourceLanguage(const std::string& _sourceLanguage);

                    /**
                     * 判断参数 SourceLanguage 是否已赋值
                     * @return SourceLanguage 是否已赋值
                     * 
                     */
                    bool SourceLanguageHasBeenSet() const;

                    /**
                     * 获取审核的业务类型，枚举值包括 "TEXT" 和 "TEXT_AIGC"。"TEXT" 表示传统文本审核，"TEXT_AIGC" 表示文本AIGC审核。
                     * @return Type 审核的业务类型，枚举值包括 "TEXT" 和 "TEXT_AIGC"。"TEXT" 表示传统文本审核，"TEXT_AIGC" 表示文本AIGC审核。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置审核的业务类型，枚举值包括 "TEXT" 和 "TEXT_AIGC"。"TEXT" 表示传统文本审核，"TEXT_AIGC" 表示文本AIGC审核。
                     * @param _type 审核的业务类型，枚举值包括 "TEXT" 和 "TEXT_AIGC"。"TEXT" 表示传统文本审核，"TEXT_AIGC" 表示文本AIGC审核。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 该字段表示待检测对象的文本内容，文本需要按utf-8格式编码，长度不能超过10000个字符（按unicode编码计算），并进行 Base64加密
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 该字段表示使用的策略的具体编号，该字段需要先在[内容安全控制台](#https://console.cloud.tencent.com/cms/clouds/manage)中配置，控制台访问地址：。
备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
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

                    /**
                     * 表示Content的原始语种，枚举值包括 "en" 和 "zh"。其中，"en" 表示英文，"zh" 表示中文。非中文场景的处理耗时较高，具体情况取决于送审文本长度，非中文场景需[反馈工单](#https://console.cloud.tencent.com/workorder/category?level1_id=141&level2_id=1287&source=14&data_title=%E6%96%87%E6%9C%AC%E5%86%85%E5%AE%B9%E5%AE%89%E5%85%A8&step=1)确认。
                     */
                    std::string m_sourceLanguage;
                    bool m_sourceLanguageHasBeenSet;

                    /**
                     * 审核的业务类型，枚举值包括 "TEXT" 和 "TEXT_AIGC"。"TEXT" 表示传统文本审核，"TEXT_AIGC" 表示文本AIGC审核。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_TEXTMODERATIONREQUEST_H_
