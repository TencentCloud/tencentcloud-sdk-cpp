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
                     * 获取<p>待检测的文本内容，需为UTF-8编码并以Base64格式传入。</p>
                     * @return Content <p>待检测的文本内容，需为UTF-8编码并以Base64格式传入。</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>待检测的文本内容，需为UTF-8编码并以Base64格式传入。</p>
                     * @param _content <p>待检测的文本内容，需为UTF-8编码并以Base64格式传入。</p>
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
                     * 获取<p>接口使用的识别策略编号，需在<a href="https://console.cloud.tencent.com/cms/clouds/manage">控制台</a>获取。详细获取方式请参考以下链接：</p><ul><li><strong>内容安全</strong>（详见步骤四：策略配置）：<a href="https://cloud.tencent.com/document/product/1124/37119">点击这里</a></li><li><strong>AI生成识别</strong>（详见服务对接-&gt;方式二）：<a href="https://cloud.tencent.com/document/product/1124/118694">点击这里</a></li></ul>
                     * @return BizType <p>接口使用的识别策略编号，需在<a href="https://console.cloud.tencent.com/cms/clouds/manage">控制台</a>获取。详细获取方式请参考以下链接：</p><ul><li><strong>内容安全</strong>（详见步骤四：策略配置）：<a href="https://cloud.tencent.com/document/product/1124/37119">点击这里</a></li><li><strong>AI生成识别</strong>（详见服务对接-&gt;方式二）：<a href="https://cloud.tencent.com/document/product/1124/118694">点击这里</a></li></ul>
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置<p>接口使用的识别策略编号，需在<a href="https://console.cloud.tencent.com/cms/clouds/manage">控制台</a>获取。详细获取方式请参考以下链接：</p><ul><li><strong>内容安全</strong>（详见步骤四：策略配置）：<a href="https://cloud.tencent.com/document/product/1124/37119">点击这里</a></li><li><strong>AI生成识别</strong>（详见服务对接-&gt;方式二）：<a href="https://cloud.tencent.com/document/product/1124/118694">点击这里</a></li></ul>
                     * @param _bizType <p>接口使用的识别策略编号，需在<a href="https://console.cloud.tencent.com/cms/clouds/manage">控制台</a>获取。详细获取方式请参考以下链接：</p><ul><li><strong>内容安全</strong>（详见步骤四：策略配置）：<a href="https://cloud.tencent.com/document/product/1124/37119">点击这里</a></li><li><strong>AI生成识别</strong>（详见服务对接-&gt;方式二）：<a href="https://cloud.tencent.com/document/product/1124/118694">点击这里</a></li></ul>
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
                     * 获取<p>该字段表示您为待检测文本分配的数据ID，作用是方便您对数据进行标识和管理。<br>取值：可由英文字母、数字、四种特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     * @return DataId <p>该字段表示您为待检测文本分配的数据ID，作用是方便您对数据进行标识和管理。<br>取值：可由英文字母、数字、四种特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置<p>该字段表示您为待检测文本分配的数据ID，作用是方便您对数据进行标识和管理。<br>取值：可由英文字母、数字、四种特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     * @param _dataId <p>该字段表示您为待检测文本分配的数据ID，作用是方便您对数据进行标识和管理。<br>取值：可由英文字母、数字、四种特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
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
                     * 获取<p>该字段标识用户信息，传入后可增强甄别有违规风险的发布者账号。</p>
                     * @return User <p>该字段标识用户信息，传入后可增强甄别有违规风险的发布者账号。</p>
                     * 
                     */
                    User GetUser() const;

                    /**
                     * 设置<p>该字段标识用户信息，传入后可增强甄别有违规风险的发布者账号。</p>
                     * @param _user <p>该字段标识用户信息，传入后可增强甄别有违规风险的发布者账号。</p>
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
                     * 获取<p>该字段标识设备信息，传入后可增强甄别有违规风险的发布者设备。</p>
                     * @return Device <p>该字段标识设备信息，传入后可增强甄别有违规风险的发布者设备。</p>
                     * 
                     */
                    Device GetDevice() const;

                    /**
                     * 设置<p>该字段标识设备信息，传入后可增强甄别有违规风险的发布者设备。</p>
                     * @param _device <p>该字段标识设备信息，传入后可增强甄别有违规风险的发布者设备。</p>
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
                     * 获取<p>Content字段的原始语种，枚举值包括 zh 和 en：</p><ul><li>推荐使用 zh</li><li>en 适用于纯英文内容，耗时较高。若需使用 en，请先通过<a href="https://console.cloud.tencent.com/workorder/category?level1_id=141&amp;level2_id=1287&amp;source=14&amp;data_title=%E6%96%87%E6%9C%AC%E5%86%85%E5%AE%B9%E5%AE%89%E5%85%A8&amp;step=1">反馈工单</a>确认</li></ul>
                     * @return SourceLanguage <p>Content字段的原始语种，枚举值包括 zh 和 en：</p><ul><li>推荐使用 zh</li><li>en 适用于纯英文内容，耗时较高。若需使用 en，请先通过<a href="https://console.cloud.tencent.com/workorder/category?level1_id=141&amp;level2_id=1287&amp;source=14&amp;data_title=%E6%96%87%E6%9C%AC%E5%86%85%E5%AE%B9%E5%AE%89%E5%85%A8&amp;step=1">反馈工单</a>确认</li></ul>
                     * 
                     */
                    std::string GetSourceLanguage() const;

                    /**
                     * 设置<p>Content字段的原始语种，枚举值包括 zh 和 en：</p><ul><li>推荐使用 zh</li><li>en 适用于纯英文内容，耗时较高。若需使用 en，请先通过<a href="https://console.cloud.tencent.com/workorder/category?level1_id=141&amp;level2_id=1287&amp;source=14&amp;data_title=%E6%96%87%E6%9C%AC%E5%86%85%E5%AE%B9%E5%AE%89%E5%85%A8&amp;step=1">反馈工单</a>确认</li></ul>
                     * @param _sourceLanguage <p>Content字段的原始语种，枚举值包括 zh 和 en：</p><ul><li>推荐使用 zh</li><li>en 适用于纯英文内容，耗时较高。若需使用 en，请先通过<a href="https://console.cloud.tencent.com/workorder/category?level1_id=141&amp;level2_id=1287&amp;source=14&amp;data_title=%E6%96%87%E6%9C%AC%E5%86%85%E5%AE%B9%E5%AE%89%E5%85%A8&amp;step=1">反馈工单</a>确认</li></ul>
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
                     * 获取<p>服务类型，枚举值包括 TEXT 和 TEXT_AIGC：<br>TEXT：内容安全<br>TEXT_AIGC：AI生成识别</p>
                     * @return Type <p>服务类型，枚举值包括 TEXT 和 TEXT_AIGC：<br>TEXT：内容安全<br>TEXT_AIGC：AI生成识别</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>服务类型，枚举值包括 TEXT 和 TEXT_AIGC：<br>TEXT：内容安全<br>TEXT_AIGC：AI生成识别</p>
                     * @param _type <p>服务类型，枚举值包括 TEXT 和 TEXT_AIGC：<br>TEXT：内容安全<br>TEXT_AIGC：AI生成识别</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>适用于上下文关联审核场景，若多条文本内容需要联合审核，通过该字段关联会话。</p>
                     * @return SessionId <p>适用于上下文关联审核场景，若多条文本内容需要联合审核，通过该字段关联会话。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>适用于上下文关联审核场景，若多条文本内容需要联合审核，通过该字段关联会话。</p>
                     * @param _sessionId <p>适用于上下文关联审核场景，若多条文本内容需要联合审核，通过该字段关联会话。</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * <p>待检测的文本内容，需为UTF-8编码并以Base64格式传入。</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>接口使用的识别策略编号，需在<a href="https://console.cloud.tencent.com/cms/clouds/manage">控制台</a>获取。详细获取方式请参考以下链接：</p><ul><li><strong>内容安全</strong>（详见步骤四：策略配置）：<a href="https://cloud.tencent.com/document/product/1124/37119">点击这里</a></li><li><strong>AI生成识别</strong>（详见服务对接-&gt;方式二）：<a href="https://cloud.tencent.com/document/product/1124/118694">点击这里</a></li></ul>
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>该字段表示您为待检测文本分配的数据ID，作用是方便您对数据进行标识和管理。<br>取值：可由英文字母、数字、四种特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>该字段标识用户信息，传入后可增强甄别有违规风险的发布者账号。</p>
                     */
                    User m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>该字段标识设备信息，传入后可增强甄别有违规风险的发布者设备。</p>
                     */
                    Device m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * <p>Content字段的原始语种，枚举值包括 zh 和 en：</p><ul><li>推荐使用 zh</li><li>en 适用于纯英文内容，耗时较高。若需使用 en，请先通过<a href="https://console.cloud.tencent.com/workorder/category?level1_id=141&amp;level2_id=1287&amp;source=14&amp;data_title=%E6%96%87%E6%9C%AC%E5%86%85%E5%AE%B9%E5%AE%89%E5%85%A8&amp;step=1">反馈工单</a>确认</li></ul>
                     */
                    std::string m_sourceLanguage;
                    bool m_sourceLanguageHasBeenSet;

                    /**
                     * <p>服务类型，枚举值包括 TEXT 和 TEXT_AIGC：<br>TEXT：内容安全<br>TEXT_AIGC：AI生成识别</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>适用于上下文关联审核场景，若多条文本内容需要联合审核，通过该字段关联会话。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_TEXTMODERATIONREQUEST_H_
