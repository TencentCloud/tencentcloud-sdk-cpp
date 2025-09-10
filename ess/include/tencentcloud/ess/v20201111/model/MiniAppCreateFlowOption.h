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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_MINIAPPCREATEFLOWOPTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_MINIAPPCREATEFLOWOPTION_H_

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
                * 小程序发起合同可选项
                */
                class MiniAppCreateFlowOption : public AbstractModel
                {
                public:
                    MiniAppCreateFlowOption();
                    ~MiniAppCreateFlowOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取到期提醒日（linux时间戳） 精确到天
                     * @return RemindedOn 到期提醒日（linux时间戳） 精确到天
                     * 
                     */
                    int64_t GetRemindedOn() const;

                    /**
                     * 设置到期提醒日（linux时间戳） 精确到天
                     * @param _remindedOn 到期提醒日（linux时间戳） 精确到天
                     * 
                     */
                    void SetRemindedOn(const int64_t& _remindedOn);

                    /**
                     * 判断参数 RemindedOn 是否已赋值
                     * @return RemindedOn 是否已赋值
                     * 
                     */
                    bool RemindedOnHasBeenSet() const;

                    /**
                     * 获取是否需要发起前进行审批
                     * @return NeedCreateReview 是否需要发起前进行审批
                     * 
                     */
                    bool GetNeedCreateReview() const;

                    /**
                     * 设置是否需要发起前进行审批
                     * @param _needCreateReview 是否需要发起前进行审批
                     * 
                     */
                    void SetNeedCreateReview(const bool& _needCreateReview);

                    /**
                     * 判断参数 NeedCreateReview 是否已赋值
                     * @return NeedCreateReview 是否已赋值
                     * 
                     */
                    bool NeedCreateReviewHasBeenSet() const;

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

                    /**
                     * 获取小程序集成发起，是否禁止发起时修改合同内容
<ul>
<li>false：默认值，不禁止发起时修改合同内容</li>
<li>true：禁止发起时修改合同内容</li>
</ul>
                     * @return ForbidEditFlow 小程序集成发起，是否禁止发起时修改合同内容
<ul>
<li>false：默认值，不禁止发起时修改合同内容</li>
<li>true：禁止发起时修改合同内容</li>
</ul>
                     * 
                     */
                    bool GetForbidEditFlow() const;

                    /**
                     * 设置小程序集成发起，是否禁止发起时修改合同内容
<ul>
<li>false：默认值，不禁止发起时修改合同内容</li>
<li>true：禁止发起时修改合同内容</li>
</ul>
                     * @param _forbidEditFlow 小程序集成发起，是否禁止发起时修改合同内容
<ul>
<li>false：默认值，不禁止发起时修改合同内容</li>
<li>true：禁止发起时修改合同内容</li>
</ul>
                     * 
                     */
                    void SetForbidEditFlow(const bool& _forbidEditFlow);

                    /**
                     * 判断参数 ForbidEditFlow 是否已赋值
                     * @return ForbidEditFlow 是否已赋值
                     * 
                     */
                    bool ForbidEditFlowHasBeenSet() const;

                private:

                    /**
                     * 到期提醒日（linux时间戳） 精确到天
                     */
                    int64_t m_remindedOn;
                    bool m_remindedOnHasBeenSet;

                    /**
                     * 是否需要发起前进行审批
                     */
                    bool m_needCreateReview;
                    bool m_needCreateReviewHasBeenSet;

                    /**
                     * 在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:![FlowDisplayType](https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png)
                     */
                    int64_t m_flowDisplayType;
                    bool m_flowDisplayTypeHasBeenSet;

                    /**
                     * 小程序集成发起，是否禁止发起时修改合同内容
<ul>
<li>false：默认值，不禁止发起时修改合同内容</li>
<li>true：禁止发起时修改合同内容</li>
</ul>
                     */
                    bool m_forbidEditFlow;
                    bool m_forbidEditFlowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_MINIAPPCREATEFLOWOPTION_H_
