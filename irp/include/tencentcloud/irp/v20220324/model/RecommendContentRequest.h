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

#ifndef TENCENTCLOUD_IRP_V20220324_MODEL_RECOMMENDCONTENTREQUEST_H_
#define TENCENTCLOUD_IRP_V20220324_MODEL_RECOMMENDCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220324/model/UserIdInfo.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            namespace Model
            {
                /**
                * RecommendContent请求参数结构体
                */
                class RecommendContentRequest : public AbstractModel
                {
                public:
                    RecommendContentRequest();
                    ~RecommendContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务id
                     * @return Bid 业务id
                     * 
                     */
                    std::string GetBid() const;

                    /**
                     * 设置业务id
                     * @param _bid 业务id
                     * 
                     */
                    void SetBid(const std::string& _bid);

                    /**
                     * 判断参数 Bid 是否已赋值
                     * @return Bid 是否已赋值
                     * 
                     */
                    bool BidHasBeenSet() const;

                    /**
                     * 获取场景id：比如有“猜你喜欢”，“热门内容”等推荐模块，每一个模块都有一个scene_id来表示。 在控制台创建场景后获取。需要跟行为上报时的id一致
                     * @return SceneId 场景id：比如有“猜你喜欢”，“热门内容”等推荐模块，每一个模块都有一个scene_id来表示。 在控制台创建场景后获取。需要跟行为上报时的id一致
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置场景id：比如有“猜你喜欢”，“热门内容”等推荐模块，每一个模块都有一个scene_id来表示。 在控制台创建场景后获取。需要跟行为上报时的id一致
                     * @param _sceneId 场景id：比如有“猜你喜欢”，“热门内容”等推荐模块，每一个模块都有一个scene_id来表示。 在控制台创建场景后获取。需要跟行为上报时的id一致
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取用户唯一ID数组，每个数组元素详见userId结构体，若不填，则接口返回热门结果
                     * @return UserIdList 用户唯一ID数组，每个数组元素详见userId结构体，若不填，则接口返回热门结果
                     * 
                     */
                    std::vector<UserIdInfo> GetUserIdList() const;

                    /**
                     * 设置用户唯一ID数组，每个数组元素详见userId结构体，若不填，则接口返回热门结果
                     * @param _userIdList 用户唯一ID数组，每个数组元素详见userId结构体，若不填，则接口返回热门结果
                     * 
                     */
                    void SetUserIdList(const std::vector<UserIdInfo>& _userIdList);

                    /**
                     * 判断参数 UserIdList 是否已赋值
                     * @return UserIdList 是否已赋值
                     * 
                     */
                    bool UserIdListHasBeenSet() const;

                    /**
                     * 获取会话id：必须和行为数据上报时所填写的traceId相同，用于行为数据来自于那次在线推荐请求的归因。**注意：此处如果没传，则响应会返回一个全局唯一ID返回给客户，并需客户透传给行为日志上报接口**
                     * @return RecTraceId 会话id：必须和行为数据上报时所填写的traceId相同，用于行为数据来自于那次在线推荐请求的归因。**注意：此处如果没传，则响应会返回一个全局唯一ID返回给客户，并需客户透传给行为日志上报接口**
                     * 
                     */
                    std::string GetRecTraceId() const;

                    /**
                     * 设置会话id：必须和行为数据上报时所填写的traceId相同，用于行为数据来自于那次在线推荐请求的归因。**注意：此处如果没传，则响应会返回一个全局唯一ID返回给客户，并需客户透传给行为日志上报接口**
                     * @param _recTraceId 会话id：必须和行为数据上报时所填写的traceId相同，用于行为数据来自于那次在线推荐请求的归因。**注意：此处如果没传，则响应会返回一个全局唯一ID返回给客户，并需客户透传给行为日志上报接口**
                     * 
                     */
                    void SetRecTraceId(const std::string& _recTraceId);

                    /**
                     * 判断参数 RecTraceId 是否已赋值
                     * @return RecTraceId 是否已赋值
                     * 
                     */
                    bool RecTraceIdHasBeenSet() const;

                    /**
                     * 获取推荐数量：物料优选的结果， 默认50个，目前最多支持200个的内容返回，如果返回个数更多，会影响性能，容易超时。
                     * @return ItemCnt 推荐数量：物料优选的结果， 默认50个，目前最多支持200个的内容返回，如果返回个数更多，会影响性能，容易超时。
                     * 
                     */
                    int64_t GetItemCnt() const;

                    /**
                     * 设置推荐数量：物料优选的结果， 默认50个，目前最多支持200个的内容返回，如果返回个数更多，会影响性能，容易超时。
                     * @param _itemCnt 推荐数量：物料优选的结果， 默认50个，目前最多支持200个的内容返回，如果返回个数更多，会影响性能，容易超时。
                     * 
                     */
                    void SetItemCnt(const int64_t& _itemCnt);

                    /**
                     * 判断参数 ItemCnt 是否已赋值
                     * @return ItemCnt 是否已赋值
                     * 
                     */
                    bool ItemCntHasBeenSet() const;

                    /**
                     * 获取物料池id，用于召回该pool_id下的商品，如果有多个，用英文;分割。**注意：此处poolId需和物料上报时的poolIdList对应上**
                     * @return PoolId 物料池id，用于召回该pool_id下的商品，如果有多个，用英文;分割。**注意：此处poolId需和物料上报时的poolIdList对应上**
                     * 
                     */
                    std::string GetPoolId() const;

                    /**
                     * 设置物料池id，用于召回该pool_id下的商品，如果有多个，用英文;分割。**注意：此处poolId需和物料上报时的poolIdList对应上**
                     * @param _poolId 物料池id，用于召回该pool_id下的商品，如果有多个，用英文;分割。**注意：此处poolId需和物料上报时的poolIdList对应上**
                     * 
                     */
                    void SetPoolId(const std::string& _poolId);

                    /**
                     * 判断参数 PoolId 是否已赋值
                     * @return PoolId 是否已赋值
                     * 
                     */
                    bool PoolIdHasBeenSet() const;

                    /**
                     * 获取来源物料id，即用户当前浏览的物料id，用于在内容详情页获取关联推荐内容
                     * @return CurrentItemId 来源物料id，即用户当前浏览的物料id，用于在内容详情页获取关联推荐内容
                     * 
                     */
                    std::string GetCurrentItemId() const;

                    /**
                     * 设置来源物料id，即用户当前浏览的物料id，用于在内容详情页获取关联推荐内容
                     * @param _currentItemId 来源物料id，即用户当前浏览的物料id，用于在内容详情页获取关联推荐内容
                     * 
                     */
                    void SetCurrentItemId(const std::string& _currentItemId);

                    /**
                     * 判断参数 CurrentItemId 是否已赋值
                     * @return CurrentItemId 是否已赋值
                     * 
                     */
                    bool CurrentItemIdHasBeenSet() const;

                    /**
                     * 获取请求响应超时时间，单位ms，默认300ms，数值设置的过小，会影响推荐效果，最小支持250ms
                     * @return ResponseTimeout 请求响应超时时间，单位ms，默认300ms，数值设置的过小，会影响推荐效果，最小支持250ms
                     * 
                     */
                    int64_t GetResponseTimeout() const;

                    /**
                     * 设置请求响应超时时间，单位ms，默认300ms，数值设置的过小，会影响推荐效果，最小支持250ms
                     * @param _responseTimeout 请求响应超时时间，单位ms，默认300ms，数值设置的过小，会影响推荐效果，最小支持250ms
                     * 
                     */
                    void SetResponseTimeout(const int64_t& _responseTimeout);

                    /**
                     * 判断参数 ResponseTimeout 是否已赋值
                     * @return ResponseTimeout 是否已赋值
                     * 
                     */
                    bool ResponseTimeoutHasBeenSet() const;

                    /**
                     * 获取返回结果中不同物料类型的比例，比例顺序需严格按照（图文，长视频，短视频，小视频）进行。只允许传[0,100]数字，多个请用**英文冒号**分割，且加起来不能超过100，以及比例数量不能超过**场景绑定的物料类型**（图文，长视频，短视频，小视频）数。**示例：**图文和短视频比例为40%:60%时，则填40:60图文和短视频比例为0%:100%时，则填0:100图文，长视频和短视频的比例为，图文占20%，剩余80%由长视频和短视频随机返回，则填20:80或仅填20均可
                     * @return ItemTypeRatio 返回结果中不同物料类型的比例，比例顺序需严格按照（图文，长视频，短视频，小视频）进行。只允许传[0,100]数字，多个请用**英文冒号**分割，且加起来不能超过100，以及比例数量不能超过**场景绑定的物料类型**（图文，长视频，短视频，小视频）数。**示例：**图文和短视频比例为40%:60%时，则填40:60图文和短视频比例为0%:100%时，则填0:100图文，长视频和短视频的比例为，图文占20%，剩余80%由长视频和短视频随机返回，则填20:80或仅填20均可
                     * 
                     */
                    std::string GetItemTypeRatio() const;

                    /**
                     * 设置返回结果中不同物料类型的比例，比例顺序需严格按照（图文，长视频，短视频，小视频）进行。只允许传[0,100]数字，多个请用**英文冒号**分割，且加起来不能超过100，以及比例数量不能超过**场景绑定的物料类型**（图文，长视频，短视频，小视频）数。**示例：**图文和短视频比例为40%:60%时，则填40:60图文和短视频比例为0%:100%时，则填0:100图文，长视频和短视频的比例为，图文占20%，剩余80%由长视频和短视频随机返回，则填20:80或仅填20均可
                     * @param _itemTypeRatio 返回结果中不同物料类型的比例，比例顺序需严格按照（图文，长视频，短视频，小视频）进行。只允许传[0,100]数字，多个请用**英文冒号**分割，且加起来不能超过100，以及比例数量不能超过**场景绑定的物料类型**（图文，长视频，短视频，小视频）数。**示例：**图文和短视频比例为40%:60%时，则填40:60图文和短视频比例为0%:100%时，则填0:100图文，长视频和短视频的比例为，图文占20%，剩余80%由长视频和短视频随机返回，则填20:80或仅填20均可
                     * 
                     */
                    void SetItemTypeRatio(const std::string& _itemTypeRatio);

                    /**
                     * 判断参数 ItemTypeRatio 是否已赋值
                     * @return ItemTypeRatio 是否已赋值
                     * 
                     */
                    bool ItemTypeRatioHasBeenSet() const;

                private:

                    /**
                     * 业务id
                     */
                    std::string m_bid;
                    bool m_bidHasBeenSet;

                    /**
                     * 场景id：比如有“猜你喜欢”，“热门内容”等推荐模块，每一个模块都有一个scene_id来表示。 在控制台创建场景后获取。需要跟行为上报时的id一致
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 用户唯一ID数组，每个数组元素详见userId结构体，若不填，则接口返回热门结果
                     */
                    std::vector<UserIdInfo> m_userIdList;
                    bool m_userIdListHasBeenSet;

                    /**
                     * 会话id：必须和行为数据上报时所填写的traceId相同，用于行为数据来自于那次在线推荐请求的归因。**注意：此处如果没传，则响应会返回一个全局唯一ID返回给客户，并需客户透传给行为日志上报接口**
                     */
                    std::string m_recTraceId;
                    bool m_recTraceIdHasBeenSet;

                    /**
                     * 推荐数量：物料优选的结果， 默认50个，目前最多支持200个的内容返回，如果返回个数更多，会影响性能，容易超时。
                     */
                    int64_t m_itemCnt;
                    bool m_itemCntHasBeenSet;

                    /**
                     * 物料池id，用于召回该pool_id下的商品，如果有多个，用英文;分割。**注意：此处poolId需和物料上报时的poolIdList对应上**
                     */
                    std::string m_poolId;
                    bool m_poolIdHasBeenSet;

                    /**
                     * 来源物料id，即用户当前浏览的物料id，用于在内容详情页获取关联推荐内容
                     */
                    std::string m_currentItemId;
                    bool m_currentItemIdHasBeenSet;

                    /**
                     * 请求响应超时时间，单位ms，默认300ms，数值设置的过小，会影响推荐效果，最小支持250ms
                     */
                    int64_t m_responseTimeout;
                    bool m_responseTimeoutHasBeenSet;

                    /**
                     * 返回结果中不同物料类型的比例，比例顺序需严格按照（图文，长视频，短视频，小视频）进行。只允许传[0,100]数字，多个请用**英文冒号**分割，且加起来不能超过100，以及比例数量不能超过**场景绑定的物料类型**（图文，长视频，短视频，小视频）数。**示例：**图文和短视频比例为40%:60%时，则填40:60图文和短视频比例为0%:100%时，则填0:100图文，长视频和短视频的比例为，图文占20%，剩余80%由长视频和短视频随机返回，则填20:80或仅填20均可
                     */
                    std::string m_itemTypeRatio;
                    bool m_itemTypeRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_MODEL_RECOMMENDCONTENTREQUEST_H_
