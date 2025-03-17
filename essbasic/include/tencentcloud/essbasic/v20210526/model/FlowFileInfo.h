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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWFILEINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FlowApproverInfo.h>
#include <tencentcloud/essbasic/v20210526/model/Component.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 合同组中每个子合同的发起信息
                */
                class FlowFileInfo : public AbstractModel
                {
                public:
                    FlowFileInfo();
                    ~FlowFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署文件资源Id列表，目前仅支持单个文件
                     * @return FileIds 签署文件资源Id列表，目前仅支持单个文件
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置签署文件资源Id列表，目前仅支持单个文件
                     * @param _fileIds 签署文件资源Id列表，目前仅支持单个文件
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取签署流程名称，长度不超过200个字符
                     * @return FlowName 签署流程名称，长度不超过200个字符
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置签署流程名称，长度不超过200个字符
                     * @param _flowName 签署流程名称，长度不超过200个字符
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取签署流程签约方列表，最多不超过5个参与方
                     * @return FlowApprovers 签署流程签约方列表，最多不超过5个参与方
                     * 
                     */
                    std::vector<FlowApproverInfo> GetFlowApprovers() const;

                    /**
                     * 设置签署流程签约方列表，最多不超过5个参与方
                     * @param _flowApprovers 签署流程签约方列表，最多不超过5个参与方
                     * 
                     */
                    void SetFlowApprovers(const std::vector<FlowApproverInfo>& _flowApprovers);

                    /**
                     * 判断参数 FlowApprovers 是否已赋值
                     * @return FlowApprovers 是否已赋值
                     * 
                     */
                    bool FlowApproversHasBeenSet() const;

                    /**
                     * 获取签署流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     * @return Deadline 签署流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     * @param _deadline 签署流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     * 
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取签署流程的描述，长度不超过1000个字符
                     * @return FlowDescription 签署流程的描述，长度不超过1000个字符
                     * 
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置签署流程的描述，长度不超过1000个字符
                     * @param _flowDescription 签署流程的描述，长度不超过1000个字符
                     * 
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     * 
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取签署流程的类型，长度不超过255个字符
                     * @return FlowType 签署流程的类型，长度不超过255个字符
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置签署流程的类型，长度不超过255个字符
                     * @param _flowType 签署流程的类型，长度不超过255个字符
                     * 
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     * 
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取已废弃，请使用【应用号配置】中的回调地址统一接收消息
                     * @return CallbackUrl 已废弃，请使用【应用号配置】中的回调地址统一接收消息
                     * @deprecated
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置已废弃，请使用【应用号配置】中的回调地址统一接收消息
                     * @param _callbackUrl 已废弃，请使用【应用号配置】中的回调地址统一接收消息
                     * @deprecated
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * @deprecated
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取第三方应用的业务信息，最大长度1000个字符。
                     * @return CustomerData 第三方应用的业务信息，最大长度1000个字符。
                     * 
                     */
                    std::string GetCustomerData() const;

                    /**
                     * 设置第三方应用的业务信息，最大长度1000个字符。
                     * @param _customerData 第三方应用的业务信息，最大长度1000个字符。
                     * 
                     */
                    void SetCustomerData(const std::string& _customerData);

                    /**
                     * 判断参数 CustomerData 是否已赋值
                     * @return CustomerData 是否已赋值
                     * 
                     */
                    bool CustomerDataHasBeenSet() const;

                    /**
                     * 获取合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署
                     * @return Unordered 合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署
                     * 
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署
                     * @param _unordered 合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署
                     * 
                     */
                    void SetUnordered(const bool& _unordered);

                    /**
                     * 判断参数 Unordered 是否已赋值
                     * @return Unordered 是否已赋值
                     * 
                     */
                    bool UnorderedHasBeenSet() const;

                    /**
                     * 获取签署文件中的发起方的填写控件，需要在发起的时候进行填充
                     * @return Components 签署文件中的发起方的填写控件，需要在发起的时候进行填充
                     * 
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置签署文件中的发起方的填写控件，需要在发起的时候进行填充
                     * @param _components 签署文件中的发起方的填写控件，需要在发起的时候进行填充
                     * 
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     * @return CustomShowMap 合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     * 
                     */
                    std::string GetCustomShowMap() const;

                    /**
                     * 设置合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     * @param _customShowMap 合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     * 
                     */
                    void SetCustomShowMap(const std::string& _customShowMap);

                    /**
                     * 判断参数 CustomShowMap 是否已赋值
                     * @return CustomShowMap 是否已赋值
                     * 
                     */
                    bool CustomShowMapHasBeenSet() const;

                    /**
                     * 获取本企业(发起方企业)是否需要签署审批
                     * @return NeedSignReview 本企业(发起方企业)是否需要签署审批
                     * 
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置本企业(发起方企业)是否需要签署审批
                     * @param _needSignReview 本企业(发起方企业)是否需要签署审批
                     * 
                     */
                    void SetNeedSignReview(const bool& _needSignReview);

                    /**
                     * 判断参数 NeedSignReview 是否已赋值
                     * @return NeedSignReview 是否已赋值
                     * 
                     */
                    bool NeedSignReviewHasBeenSet() const;

                    /**
                     * 获取在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:![FlowDisplayType](https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png)
                     * @return FlowDisplayType 在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:![FlowDisplayType](https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png)
                     * 
                     */
                    int64_t GetFlowDisplayType() const;

                    /**
                     * 设置在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:![FlowDisplayType](https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png)
                     * @param _flowDisplayType 在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:![FlowDisplayType](https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png)
                     * 
                     */
                    void SetFlowDisplayType(const int64_t& _flowDisplayType);

                    /**
                     * 判断参数 FlowDisplayType 是否已赋值
                     * @return FlowDisplayType 是否已赋值
                     * 
                     */
                    bool FlowDisplayTypeHasBeenSet() const;

                private:

                    /**
                     * 签署文件资源Id列表，目前仅支持单个文件
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 签署流程名称，长度不超过200个字符
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 签署流程签约方列表，最多不超过5个参与方
                     */
                    std::vector<FlowApproverInfo> m_flowApprovers;
                    bool m_flowApproversHasBeenSet;

                    /**
                     * 签署流程截止时间，十位数时间戳，最大值为33162419560，即3020年
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 签署流程的描述，长度不超过1000个字符
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 签署流程的类型，长度不超过255个字符
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 已废弃，请使用【应用号配置】中的回调地址统一接收消息
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 第三方应用的业务信息，最大长度1000个字符。
                     */
                    std::string m_customerData;
                    bool m_customerDataHasBeenSet;

                    /**
                     * 合同签署顺序类型(无序签,顺序签)，默认为false，即有序签署
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 签署文件中的发起方的填写控件，需要在发起的时候进行填充
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     */
                    std::string m_customShowMap;
                    bool m_customShowMapHasBeenSet;

                    /**
                     * 本企业(发起方企业)是否需要签署审批
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * 在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:![FlowDisplayType](https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png)
                     */
                    int64_t m_flowDisplayType;
                    bool m_flowDisplayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWFILEINFO_H_
