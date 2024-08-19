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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HANDLECURRENTPLAYLISTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HANDLECURRENTPLAYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RoundPlayListItemInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * HandleCurrentPlaylist请求参数结构体
                */
                class HandleCurrentPlaylistRequest : public AbstractModel
                {
                public:
                    HandleCurrentPlaylistRequest();
                    ~HandleCurrentPlaylistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取轮播播单唯一标识。
                     * @return RoundPlayId 轮播播单唯一标识。
                     * 
                     */
                    std::string GetRoundPlayId() const;

                    /**
                     * 设置轮播播单唯一标识。
                     * @param _roundPlayId 轮播播单唯一标识。
                     * 
                     */
                    void SetRoundPlayId(const std::string& _roundPlayId);

                    /**
                     * 判断参数 RoundPlayId 是否已赋值
                     * @return RoundPlayId 是否已赋值
                     * 
                     */
                    bool RoundPlayIdHasBeenSet() const;

                    /**
                     * 获取操作类型，取值有：<li>Insert：向当前播放列表插入播放节目。</li> <li>InsertTemporary：向当前播放列表临时插入播放节目。只能插入到当前正在播放的节目后面，临时插入的节目只在本次轮播过程生效。</li><li>Delete：删除播放列表中的播放节目。不能删除正在播放的节目。</li>
                     * @return Operation 操作类型，取值有：<li>Insert：向当前播放列表插入播放节目。</li> <li>InsertTemporary：向当前播放列表临时插入播放节目。只能插入到当前正在播放的节目后面，临时插入的节目只在本次轮播过程生效。</li><li>Delete：删除播放列表中的播放节目。不能删除正在播放的节目。</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型，取值有：<li>Insert：向当前播放列表插入播放节目。</li> <li>InsertTemporary：向当前播放列表临时插入播放节目。只能插入到当前正在播放的节目后面，临时插入的节目只在本次轮播过程生效。</li><li>Delete：删除播放列表中的播放节目。不能删除正在播放的节目。</li>
                     * @param _operation 操作类型，取值有：<li>Insert：向当前播放列表插入播放节目。</li> <li>InsertTemporary：向当前播放列表临时插入播放节目。只能插入到当前正在播放的节目后面，临时插入的节目只在本次轮播过程生效。</li><li>Delete：删除播放列表中的播放节目。不能删除正在播放的节目。</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取播单节目 ID。当 Operation 为 Insert 时必填，表示插入的节目列表位于该播放节目之后。插入的位置必须在当前正在播放的节目之后。
                     * @return ItemId 播单节目 ID。当 Operation 为 Insert 时必填，表示插入的节目列表位于该播放节目之后。插入的位置必须在当前正在播放的节目之后。
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置播单节目 ID。当 Operation 为 Insert 时必填，表示插入的节目列表位于该播放节目之后。插入的位置必须在当前正在播放的节目之后。
                     * @param _itemId 播单节目 ID。当 Operation 为 Insert 时必填，表示插入的节目列表位于该播放节目之后。插入的位置必须在当前正在播放的节目之后。
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取节目列表。当 Operation 为 Insert、InsertTemporary、Delete 时必填，表示要操作的节目列表。列表长度最大为10。
                     * @return RoundPlaylist 节目列表。当 Operation 为 Insert、InsertTemporary、Delete 时必填，表示要操作的节目列表。列表长度最大为10。
                     * 
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 设置节目列表。当 Operation 为 Insert、InsertTemporary、Delete 时必填，表示要操作的节目列表。列表长度最大为10。
                     * @param _roundPlaylist 节目列表。当 Operation 为 Insert、InsertTemporary、Delete 时必填，表示要操作的节目列表。列表长度最大为10。
                     * 
                     */
                    void SetRoundPlaylist(const std::vector<RoundPlayListItemInfo>& _roundPlaylist);

                    /**
                     * 判断参数 RoundPlaylist 是否已赋值
                     * @return RoundPlaylist 是否已赋值
                     * 
                     */
                    bool RoundPlaylistHasBeenSet() const;

                private:

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 轮播播单唯一标识。
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * 操作类型，取值有：<li>Insert：向当前播放列表插入播放节目。</li> <li>InsertTemporary：向当前播放列表临时插入播放节目。只能插入到当前正在播放的节目后面，临时插入的节目只在本次轮播过程生效。</li><li>Delete：删除播放列表中的播放节目。不能删除正在播放的节目。</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 播单节目 ID。当 Operation 为 Insert 时必填，表示插入的节目列表位于该播放节目之后。插入的位置必须在当前正在播放的节目之后。
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 节目列表。当 Operation 为 Insert、InsertTemporary、Delete 时必填，表示要操作的节目列表。列表长度最大为10。
                     */
                    std::vector<RoundPlayListItemInfo> m_roundPlaylist;
                    bool m_roundPlaylistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HANDLECURRENTPLAYLISTREQUEST_H_
