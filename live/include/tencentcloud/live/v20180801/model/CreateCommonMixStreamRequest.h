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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECOMMONMIXSTREAMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECOMMONMIXSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CommonMixInputParam.h>
#include <tencentcloud/live/v20180801/model/CommonMixOutputParams.h>
#include <tencentcloud/live/v20180801/model/CommonMixControlParams.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateCommonMixStream请求参数结构体
                */
                class CreateCommonMixStreamRequest : public AbstractModel
                {
                public:
                    CreateCommonMixStreamRequest();
                    ~CreateCommonMixStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取混流会话（申请混流开始到取消混流结束）标识 ID。80字节以内，仅含字母、数字以及下划线的字符串。
                     * @return MixStreamSessionId 混流会话（申请混流开始到取消混流结束）标识 ID。80字节以内，仅含字母、数字以及下划线的字符串。
                     * 
                     */
                    std::string GetMixStreamSessionId() const;

                    /**
                     * 设置混流会话（申请混流开始到取消混流结束）标识 ID。80字节以内，仅含字母、数字以及下划线的字符串。
                     * @param _mixStreamSessionId 混流会话（申请混流开始到取消混流结束）标识 ID。80字节以内，仅含字母、数字以及下划线的字符串。
                     * 
                     */
                    void SetMixStreamSessionId(const std::string& _mixStreamSessionId);

                    /**
                     * 判断参数 MixStreamSessionId 是否已赋值
                     * @return MixStreamSessionId 是否已赋值
                     * 
                     */
                    bool MixStreamSessionIdHasBeenSet() const;

                    /**
                     * 获取混流输入流列表。
                     * @return InputStreamList 混流输入流列表。
                     * 
                     */
                    std::vector<CommonMixInputParam> GetInputStreamList() const;

                    /**
                     * 设置混流输入流列表。
                     * @param _inputStreamList 混流输入流列表。
                     * 
                     */
                    void SetInputStreamList(const std::vector<CommonMixInputParam>& _inputStreamList);

                    /**
                     * 判断参数 InputStreamList 是否已赋值
                     * @return InputStreamList 是否已赋值
                     * 
                     */
                    bool InputStreamListHasBeenSet() const;

                    /**
                     * 获取混流输出流参数。
                     * @return OutputParams 混流输出流参数。
                     * 
                     */
                    CommonMixOutputParams GetOutputParams() const;

                    /**
                     * 设置混流输出流参数。
                     * @param _outputParams 混流输出流参数。
                     * 
                     */
                    void SetOutputParams(const CommonMixOutputParams& _outputParams);

                    /**
                     * 判断参数 OutputParams 是否已赋值
                     * @return OutputParams 是否已赋值
                     * 
                     */
                    bool OutputParamsHasBeenSet() const;

                    /**
                     * 获取输入模板 ID，若设置该参数，将按默认模板布局输出，无需填入自定义位置参数。
不填默认为0。
两输入源支持10，20，30，40，50。
三输入源支持310，390，391。
四输入源支持410。
五输入源支持510，590。
六输入源支持610。
                     * @return MixStreamTemplateId 输入模板 ID，若设置该参数，将按默认模板布局输出，无需填入自定义位置参数。
不填默认为0。
两输入源支持10，20，30，40，50。
三输入源支持310，390，391。
四输入源支持410。
五输入源支持510，590。
六输入源支持610。
                     * 
                     */
                    int64_t GetMixStreamTemplateId() const;

                    /**
                     * 设置输入模板 ID，若设置该参数，将按默认模板布局输出，无需填入自定义位置参数。
不填默认为0。
两输入源支持10，20，30，40，50。
三输入源支持310，390，391。
四输入源支持410。
五输入源支持510，590。
六输入源支持610。
                     * @param _mixStreamTemplateId 输入模板 ID，若设置该参数，将按默认模板布局输出，无需填入自定义位置参数。
不填默认为0。
两输入源支持10，20，30，40，50。
三输入源支持310，390，391。
四输入源支持410。
五输入源支持510，590。
六输入源支持610。
                     * 
                     */
                    void SetMixStreamTemplateId(const int64_t& _mixStreamTemplateId);

                    /**
                     * 判断参数 MixStreamTemplateId 是否已赋值
                     * @return MixStreamTemplateId 是否已赋值
                     * 
                     */
                    bool MixStreamTemplateIdHasBeenSet() const;

                    /**
                     * 获取混流的特殊控制参数。如无特殊需求，无需填写。
                     * @return ControlParams 混流的特殊控制参数。如无特殊需求，无需填写。
                     * 
                     */
                    CommonMixControlParams GetControlParams() const;

                    /**
                     * 设置混流的特殊控制参数。如无特殊需求，无需填写。
                     * @param _controlParams 混流的特殊控制参数。如无特殊需求，无需填写。
                     * 
                     */
                    void SetControlParams(const CommonMixControlParams& _controlParams);

                    /**
                     * 判断参数 ControlParams 是否已赋值
                     * @return ControlParams 是否已赋值
                     * 
                     */
                    bool ControlParamsHasBeenSet() const;

                private:

                    /**
                     * 混流会话（申请混流开始到取消混流结束）标识 ID。80字节以内，仅含字母、数字以及下划线的字符串。
                     */
                    std::string m_mixStreamSessionId;
                    bool m_mixStreamSessionIdHasBeenSet;

                    /**
                     * 混流输入流列表。
                     */
                    std::vector<CommonMixInputParam> m_inputStreamList;
                    bool m_inputStreamListHasBeenSet;

                    /**
                     * 混流输出流参数。
                     */
                    CommonMixOutputParams m_outputParams;
                    bool m_outputParamsHasBeenSet;

                    /**
                     * 输入模板 ID，若设置该参数，将按默认模板布局输出，无需填入自定义位置参数。
不填默认为0。
两输入源支持10，20，30，40，50。
三输入源支持310，390，391。
四输入源支持410。
五输入源支持510，590。
六输入源支持610。
                     */
                    int64_t m_mixStreamTemplateId;
                    bool m_mixStreamTemplateIdHasBeenSet;

                    /**
                     * 混流的特殊控制参数。如无特殊需求，无需填写。
                     */
                    CommonMixControlParams m_controlParams;
                    bool m_controlParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECOMMONMIXSTREAMREQUEST_H_
