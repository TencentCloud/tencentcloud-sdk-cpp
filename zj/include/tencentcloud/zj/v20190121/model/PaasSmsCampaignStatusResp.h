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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_PAASSMSCAMPAIGNSTATUSRESP_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_PAASSMSCAMPAIGNSTATUSRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 拉取活动状态返回
                */
                class PaasSmsCampaignStatusResp : public AbstractModel
                {
                public:
                    PaasSmsCampaignStatusResp();
                    ~PaasSmsCampaignStatusResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0-未发送 1-发送中 2-发送结束 3-发送取消
                     * @return Status 0-未发送 1-发送中 2-发送结束 3-发送取消
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0-未发送 1-发送中 2-发送结束 3-发送取消
                     * @param _status 0-未发送 1-发送中 2-发送结束 3-发送取消
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 0-未发送 1-发送中 2-发送结束 3-发送取消
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_PAASSMSCAMPAIGNSTATUSRESP_H_
