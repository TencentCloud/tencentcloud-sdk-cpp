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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_MODIFYLINKADVANCEDLOGREQUEST_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_MODIFYLINKADVANCEDLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * ModifyLinkAdvancedLog请求参数结构体
                */
                class ModifyLinkAdvancedLogRequest : public AbstractModel
                {
                public:
                    ModifyLinkAdvancedLogRequest();
                    ~ModifyLinkAdvancedLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云兔ID
                     * @return LinkID 云兔ID
                     * 
                     */
                    int64_t GetLinkID() const;

                    /**
                     * 设置云兔ID
                     * @param _linkID 云兔ID
                     * 
                     */
                    void SetLinkID(const int64_t& _linkID);

                    /**
                     * 判断参数 LinkID 是否已赋值
                     * @return LinkID 是否已赋值
                     * 
                     */
                    bool LinkIDHasBeenSet() const;

                    /**
                     * 获取是否激活高级日志 0 关闭 1激活
                     * @return IsAdLog 是否激活高级日志 0 关闭 1激活
                     * 
                     */
                    int64_t GetIsAdLog() const;

                    /**
                     * 设置是否激活高级日志 0 关闭 1激活
                     * @param _isAdLog 是否激活高级日志 0 关闭 1激活
                     * 
                     */
                    void SetIsAdLog(const int64_t& _isAdLog);

                    /**
                     * 判断参数 IsAdLog 是否已赋值
                     * @return IsAdLog 是否已赋值
                     * 
                     */
                    bool IsAdLogHasBeenSet() const;

                private:

                    /**
                     * 云兔ID
                     */
                    int64_t m_linkID;
                    bool m_linkIDHasBeenSet;

                    /**
                     * 是否激活高级日志 0 关闭 1激活
                     */
                    int64_t m_isAdLog;
                    bool m_isAdLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_MODIFYLINKADVANCEDLOGREQUEST_H_
