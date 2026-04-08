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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARSCRIPTSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARSCRIPTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveAvatarScripts请求参数结构体
                */
                class DescribeLiveAvatarScriptsRequest : public AbstractModel
                {
                public:
                    DescribeLiveAvatarScriptsRequest();
                    ~DescribeLiveAvatarScriptsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数字人直播间 ID。</p>
                     * @return RoomId <p>数字人直播间 ID。</p>
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置<p>数字人直播间 ID。</p>
                     * @param _roomId <p>数字人直播间 ID。</p>
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取<p>数字人直播间话术 ID。</p>
                     * @return ScriptId <p>数字人直播间话术 ID。</p>
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置<p>数字人直播间话术 ID。</p>
                     * @param _scriptId <p>数字人直播间话术 ID。</p>
                     * 
                     */
                    void SetScriptId(const std::string& _scriptId);

                    /**
                     * 判断参数 ScriptId 是否已赋值
                     * @return ScriptId 是否已赋值
                     * 
                     */
                    bool ScriptIdHasBeenSet() const;

                    /**
                     * 获取<p>分页查询的页数。</p>
                     * @return PageIndex <p>分页查询的页数。</p>
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置<p>分页查询的页数。</p>
                     * @param _pageIndex <p>分页查询的页数。</p>
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取<p>分页查询的每页个数。</p>
                     * @return PageSize <p>分页查询的每页个数。</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>分页查询的每页个数。</p>
                     * @param _pageSize <p>分页查询的每页个数。</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>数字人该话术所属的产品 ID。</p>
                     * @return ProductId <p>数字人该话术所属的产品 ID。</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>数字人该话术所属的产品 ID。</p>
                     * @param _productId <p>数字人该话术所属的产品 ID。</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                private:

                    /**
                     * <p>数字人直播间 ID。</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>数字人直播间话术 ID。</p>
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * <p>分页查询的页数。</p>
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * <p>分页查询的每页个数。</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>数字人该话术所属的产品 ID。</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARSCRIPTSREQUEST_H_
