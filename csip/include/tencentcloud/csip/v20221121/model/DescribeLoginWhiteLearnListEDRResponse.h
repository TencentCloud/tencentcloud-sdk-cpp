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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITELEARNLISTEDRRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITELEARNLISTEDRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LoginWhiteItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeLoginWhiteLearnListEDR返回参数结构体
                */
                class DescribeLoginWhiteLearnListEDRResponse : public AbstractModel
                {
                public:
                    DescribeLoginWhiteLearnListEDRResponse();
                    ~DescribeLoginWhiteLearnListEDRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则组总数（按 AppId + 常用登录地聚合）</p>
                     * @return TotalCount <p>规则组总数（按 AppId + 常用登录地聚合）</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>自学习白名单规则组列表（Type 恒为 Learn），为空时返回 []</p>
                     * @return List <p>自学习白名单规则组列表（Type 恒为 Learn），为空时返回 []</p>
                     * 
                     */
                    std::vector<LoginWhiteItem> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>自学习白名单开关状态；多账号时取当前账号，供前端空态提示前往开启</p>
                     * @return AutoLearnEnable <p>自学习白名单开关状态；多账号时取当前账号，供前端空态提示前往开启</p>
                     * 
                     */
                    bool GetAutoLearnEnable() const;

                    /**
                     * 判断参数 AutoLearnEnable 是否已赋值
                     * @return AutoLearnEnable 是否已赋值
                     * 
                     */
                    bool AutoLearnEnableHasBeenSet() const;

                private:

                    /**
                     * <p>规则组总数（按 AppId + 常用登录地聚合）</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>自学习白名单规则组列表（Type 恒为 Learn），为空时返回 []</p>
                     */
                    std::vector<LoginWhiteItem> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>自学习白名单开关状态；多账号时取当前账号，供前端空态提示前往开启</p>
                     */
                    bool m_autoLearnEnable;
                    bool m_autoLearnEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITELEARNLISTEDRRESPONSE_H_
