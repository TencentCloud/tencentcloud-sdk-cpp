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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEMINIPROGRAMREPLAYPACKSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEMINIPROGRAMREPLAYPACKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeMiniProgramReplayPacks请求参数结构体
                */
                class DescribeMiniProgramReplayPacksRequest : public AbstractModel
                {
                public:
                    DescribeMiniProgramReplayPacksRequest();
                    ~DescribeMiniProgramReplayPacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return AppId <p>应用id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _appId <p>应用id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>状态过滤（compiling/ready/failed，可选）</p>
                     * @return Status <p>状态过滤（compiling/ready/failed，可选）</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态过滤（compiling/ready/failed，可选）</p>
                     * @param _status <p>状态过滤（compiling/ready/failed，可选）</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>返回条数（默认20，最大100）</p>
                     * @return Limit <p>返回条数（默认20，最大100）</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回条数（默认20，最大100）</p>
                     * @param _limit <p>返回条数（默认20，最大100）</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页游标（可选）</p>
                     * @return Cursor <p>分页游标（可选）</p>
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置<p>分页游标（可选）</p>
                     * @param _cursor <p>分页游标（可选）</p>
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>状态过滤（compiling/ready/failed，可选）</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>返回条数（默认20，最大100）</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页游标（可选）</p>
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEMINIPROGRAMREPLAYPACKSREQUEST_H_
