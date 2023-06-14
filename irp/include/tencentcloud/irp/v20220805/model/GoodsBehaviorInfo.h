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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_GOODSBEHAVIORINFO_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_GOODSBEHAVIORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220805/model/StrUserIdInfo.h>
#include <tencentcloud/irp/v20220805/model/UserPortraitInfo.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220805
        {
            namespace Model
            {
                /**
                * 电商行为
                */
                class GoodsBehaviorInfo : public AbstractModel
                {
                public:
                    GoodsBehaviorInfo();
                    ~GoodsBehaviorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识
                     * @return UserId 用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识
                     * @param _userId 用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取商品唯一ID，skuId或spuId，客户根据需求自行决定商品主键粒度
                     * @return GoodsId 商品唯一ID，skuId或spuId，客户根据需求自行决定商品主键粒度
                     * 
                     */
                    std::string GetGoodsId() const;

                    /**
                     * 设置商品唯一ID，skuId或spuId，客户根据需求自行决定商品主键粒度
                     * @param _goodsId 商品唯一ID，skuId或spuId，客户根据需求自行决定商品主键粒度
                     * 
                     */
                    void SetGoodsId(const std::string& _goodsId);

                    /**
                     * 判断参数 GoodsId 是否已赋值
                     * @return GoodsId 是否已赋值
                     * 
                     */
                    bool GoodsIdHasBeenSet() const;

                    /**
                     * 获取行为类型：<br> ● expose - 曝光，<b>必须</b><br> ● click - 点击，<b>必须</b><br/>  ● stay - 详情页停留时长，<b>强烈建议</b><br/>  ● videoover - 视频播放时长，<b>强烈建议</b><br/> ●  like - 点赞&喜欢，<b>正效果</b><br/> ● collect - 收藏，<b>正效果</b><br/> ●  share - 转发&分享，<b>正效果</b><br/> ● reward - 打赏，<b>正效果</b><br/> ● unlike - 踩&不喜欢，<b>负效果</b><br/> ●  comment - 评论<br/> ●  order - 下单<br/> ●  buy - 购买成功<br/> ●  addcart - 加入购物车<br/>   
不支持的行为类型，可以映射到未被使用的其他行为类型。如实际业务数据中有私信行为，没有收藏行为，可以将私信行为映射到收藏行为
                     * @return BehaviorType 行为类型：<br> ● expose - 曝光，<b>必须</b><br> ● click - 点击，<b>必须</b><br/>  ● stay - 详情页停留时长，<b>强烈建议</b><br/>  ● videoover - 视频播放时长，<b>强烈建议</b><br/> ●  like - 点赞&喜欢，<b>正效果</b><br/> ● collect - 收藏，<b>正效果</b><br/> ●  share - 转发&分享，<b>正效果</b><br/> ● reward - 打赏，<b>正效果</b><br/> ● unlike - 踩&不喜欢，<b>负效果</b><br/> ●  comment - 评论<br/> ●  order - 下单<br/> ●  buy - 购买成功<br/> ●  addcart - 加入购物车<br/>   
不支持的行为类型，可以映射到未被使用的其他行为类型。如实际业务数据中有私信行为，没有收藏行为，可以将私信行为映射到收藏行为
                     * 
                     */
                    std::string GetBehaviorType() const;

                    /**
                     * 设置行为类型：<br> ● expose - 曝光，<b>必须</b><br> ● click - 点击，<b>必须</b><br/>  ● stay - 详情页停留时长，<b>强烈建议</b><br/>  ● videoover - 视频播放时长，<b>强烈建议</b><br/> ●  like - 点赞&喜欢，<b>正效果</b><br/> ● collect - 收藏，<b>正效果</b><br/> ●  share - 转发&分享，<b>正效果</b><br/> ● reward - 打赏，<b>正效果</b><br/> ● unlike - 踩&不喜欢，<b>负效果</b><br/> ●  comment - 评论<br/> ●  order - 下单<br/> ●  buy - 购买成功<br/> ●  addcart - 加入购物车<br/>   
不支持的行为类型，可以映射到未被使用的其他行为类型。如实际业务数据中有私信行为，没有收藏行为，可以将私信行为映射到收藏行为
                     * @param _behaviorType 行为类型：<br> ● expose - 曝光，<b>必须</b><br> ● click - 点击，<b>必须</b><br/>  ● stay - 详情页停留时长，<b>强烈建议</b><br/>  ● videoover - 视频播放时长，<b>强烈建议</b><br/> ●  like - 点赞&喜欢，<b>正效果</b><br/> ● collect - 收藏，<b>正效果</b><br/> ●  share - 转发&分享，<b>正效果</b><br/> ● reward - 打赏，<b>正效果</b><br/> ● unlike - 踩&不喜欢，<b>负效果</b><br/> ●  comment - 评论<br/> ●  order - 下单<br/> ●  buy - 购买成功<br/> ●  addcart - 加入购物车<br/>   
不支持的行为类型，可以映射到未被使用的其他行为类型。如实际业务数据中有私信行为，没有收藏行为，可以将私信行为映射到收藏行为
                     * 
                     */
                    void SetBehaviorType(const std::string& _behaviorType);

                    /**
                     * 判断参数 BehaviorType 是否已赋值
                     * @return BehaviorType 是否已赋值
                     * 
                     */
                    bool BehaviorTypeHasBeenSet() const;

                    /**
                     * 获取行为类型对应的行为值：<br/> ● expose - 曝光，固定填1<br/> ● click - 点击，固定填1<br/>  ● stay - 详情页停留时长，填停留秒数，取值[1-86400]<br/>  ● videoover - 视频播放时长，填播放结束的秒数，取值[1-86400]<br/> ●  like - 点赞&喜欢，固定填1<br/> ● collect - 收藏，固定填1<br/> ●  share - 转发&分享，固定填1<br/> ● reward - 打赏，填打赏金额，没有则填1<br/> ● unlike - 踩&不喜欢，填不喜欢的原因，没有则填1<br/> ●  comment - 评论，填评论内容，如“上海加油”<br/> ●  order - 下单，固定填1<br/> ●  buy - 购买成功，固定填1<br/> ●  addcart - 加入购物车，固定填1
                     * @return BehaviorValue 行为类型对应的行为值：<br/> ● expose - 曝光，固定填1<br/> ● click - 点击，固定填1<br/>  ● stay - 详情页停留时长，填停留秒数，取值[1-86400]<br/>  ● videoover - 视频播放时长，填播放结束的秒数，取值[1-86400]<br/> ●  like - 点赞&喜欢，固定填1<br/> ● collect - 收藏，固定填1<br/> ●  share - 转发&分享，固定填1<br/> ● reward - 打赏，填打赏金额，没有则填1<br/> ● unlike - 踩&不喜欢，填不喜欢的原因，没有则填1<br/> ●  comment - 评论，填评论内容，如“上海加油”<br/> ●  order - 下单，固定填1<br/> ●  buy - 购买成功，固定填1<br/> ●  addcart - 加入购物车，固定填1
                     * 
                     */
                    std::string GetBehaviorValue() const;

                    /**
                     * 设置行为类型对应的行为值：<br/> ● expose - 曝光，固定填1<br/> ● click - 点击，固定填1<br/>  ● stay - 详情页停留时长，填停留秒数，取值[1-86400]<br/>  ● videoover - 视频播放时长，填播放结束的秒数，取值[1-86400]<br/> ●  like - 点赞&喜欢，固定填1<br/> ● collect - 收藏，固定填1<br/> ●  share - 转发&分享，固定填1<br/> ● reward - 打赏，填打赏金额，没有则填1<br/> ● unlike - 踩&不喜欢，填不喜欢的原因，没有则填1<br/> ●  comment - 评论，填评论内容，如“上海加油”<br/> ●  order - 下单，固定填1<br/> ●  buy - 购买成功，固定填1<br/> ●  addcart - 加入购物车，固定填1
                     * @param _behaviorValue 行为类型对应的行为值：<br/> ● expose - 曝光，固定填1<br/> ● click - 点击，固定填1<br/>  ● stay - 详情页停留时长，填停留秒数，取值[1-86400]<br/>  ● videoover - 视频播放时长，填播放结束的秒数，取值[1-86400]<br/> ●  like - 点赞&喜欢，固定填1<br/> ● collect - 收藏，固定填1<br/> ●  share - 转发&分享，固定填1<br/> ● reward - 打赏，填打赏金额，没有则填1<br/> ● unlike - 踩&不喜欢，填不喜欢的原因，没有则填1<br/> ●  comment - 评论，填评论内容，如“上海加油”<br/> ●  order - 下单，固定填1<br/> ●  buy - 购买成功，固定填1<br/> ●  addcart - 加入购物车，固定填1
                     * 
                     */
                    void SetBehaviorValue(const std::string& _behaviorValue);

                    /**
                     * 判断参数 BehaviorValue 是否已赋值
                     * @return BehaviorValue 是否已赋值
                     * 
                     */
                    bool BehaviorValueHasBeenSet() const;

                    /**
                     * 获取行为发生的时间戳： 秒级时间戳，尽量实时上报，最长不超过半小时否则会影响推荐结果的准确性
                     * @return BehaviorTimestamp 行为发生的时间戳： 秒级时间戳，尽量实时上报，最长不超过半小时否则会影响推荐结果的准确性
                     * 
                     */
                    int64_t GetBehaviorTimestamp() const;

                    /**
                     * 设置行为发生的时间戳： 秒级时间戳，尽量实时上报，最长不超过半小时否则会影响推荐结果的准确性
                     * @param _behaviorTimestamp 行为发生的时间戳： 秒级时间戳，尽量实时上报，最长不超过半小时否则会影响推荐结果的准确性
                     * 
                     */
                    void SetBehaviorTimestamp(const int64_t& _behaviorTimestamp);

                    /**
                     * 判断参数 BehaviorTimestamp 是否已赋值
                     * @return BehaviorTimestamp 是否已赋值
                     * 
                     */
                    bool BehaviorTimestampHasBeenSet() const;

                    /**
                     * 获取行为发生的场景ID，在控制台创建场景后获取
                     * @return SceneId 行为发生的场景ID，在控制台创建场景后获取
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置行为发生的场景ID，在控制台创建场景后获取
                     * @param _sceneId 行为发生的场景ID，在控制台创建场景后获取
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
                     * 获取算法来源： <br>● business 业务自己的算法对照组<br/> ● tencent 腾讯算法<br/> ● other 其他算法<br/>默认为tencent，区分行为来源于哪个算法，<b>用于Poc阶段的效果对比验证</b>
                     * @return Source 算法来源： <br>● business 业务自己的算法对照组<br/> ● tencent 腾讯算法<br/> ● other 其他算法<br/>默认为tencent，区分行为来源于哪个算法，<b>用于Poc阶段的效果对比验证</b>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置算法来源： <br>● business 业务自己的算法对照组<br/> ● tencent 腾讯算法<br/> ● other 其他算法<br/>默认为tencent，区分行为来源于哪个算法，<b>用于Poc阶段的效果对比验证</b>
                     * @param _source 算法来源： <br>● business 业务自己的算法对照组<br/> ● tencent 腾讯算法<br/> ● other 其他算法<br/>默认为tencent，区分行为来源于哪个算法，<b>用于Poc阶段的效果对比验证</b>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取标识行为发生在app内哪个页面，取值客户自定，可以是明文或id，建议传明文便于理解、分析，如首页，发现页，用户中心等
<b>用作上下文特征，刻画不同场景用户行为分布的差异</b>
                     * @return Page 标识行为发生在app内哪个页面，取值客户自定，可以是明文或id，建议传明文便于理解、分析，如首页，发现页，用户中心等
<b>用作上下文特征，刻画不同场景用户行为分布的差异</b>
                     * 
                     */
                    std::string GetPage() const;

                    /**
                     * 设置标识行为发生在app内哪个页面，取值客户自定，可以是明文或id，建议传明文便于理解、分析，如首页，发现页，用户中心等
<b>用作上下文特征，刻画不同场景用户行为分布的差异</b>
                     * @param _page 标识行为发生在app内哪个页面，取值客户自定，可以是明文或id，建议传明文便于理解、分析，如首页，发现页，用户中心等
<b>用作上下文特征，刻画不同场景用户行为分布的差异</b>
                     * 
                     */
                    void SetPage(const std::string& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取标识行为发生在页面的哪一区块，取值客户自定，可以是明文或id，建议传明文便于理解、分析，如横幅、广告位、猜你喜欢等
<b>用作上下文特征，刻画不同模块用户行为分布的差异</b>
                     * @return Module 标识行为发生在页面的哪一区块，取值客户自定，可以是明文或id，建议传明文便于理解、分析，如横幅、广告位、猜你喜欢等
<b>用作上下文特征，刻画不同模块用户行为分布的差异</b>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置标识行为发生在页面的哪一区块，取值客户自定，可以是明文或id，建议传明文便于理解、分析，如横幅、广告位、猜你喜欢等
<b>用作上下文特征，刻画不同模块用户行为分布的差异</b>
                     * @param _module 标识行为发生在页面的哪一区块，取值客户自定，可以是明文或id，建议传明文便于理解、分析，如横幅、广告位、猜你喜欢等
<b>用作上下文特征，刻画不同模块用户行为分布的差异</b>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取推荐追踪ID，使用推荐结果中返回的GoodsTraceId填入。 
注意：如果和推荐结果中的GoodsTraceId不同，会影响行为特征归因，影响推荐算法效果。<b>强烈建议</b>
                     * @return GoodsTraceId 推荐追踪ID，使用推荐结果中返回的GoodsTraceId填入。 
注意：如果和推荐结果中的GoodsTraceId不同，会影响行为特征归因，影响推荐算法效果。<b>强烈建议</b>
                     * 
                     */
                    std::string GetGoodsTraceId() const;

                    /**
                     * 设置推荐追踪ID，使用推荐结果中返回的GoodsTraceId填入。 
注意：如果和推荐结果中的GoodsTraceId不同，会影响行为特征归因，影响推荐算法效果。<b>强烈建议</b>
                     * @param _goodsTraceId 推荐追踪ID，使用推荐结果中返回的GoodsTraceId填入。 
注意：如果和推荐结果中的GoodsTraceId不同，会影响行为特征归因，影响推荐算法效果。<b>强烈建议</b>
                     * 
                     */
                    void SetGoodsTraceId(const std::string& _goodsTraceId);

                    /**
                     * 判断参数 GoodsTraceId 是否已赋值
                     * @return GoodsTraceId 是否已赋值
                     * 
                     */
                    bool GoodsTraceIdHasBeenSet() const;

                    /**
                     * 获取相关推荐场景点击进入详情页的内容id，该字段用来注明行为发生于哪个内容的详情页推荐中，<b>相关推荐场景强烈建议</b>
                     * @return ReferrerGoodsId 相关推荐场景点击进入详情页的内容id，该字段用来注明行为发生于哪个内容的详情页推荐中，<b>相关推荐场景强烈建议</b>
                     * 
                     */
                    std::string GetReferrerGoodsId() const;

                    /**
                     * 设置相关推荐场景点击进入详情页的内容id，该字段用来注明行为发生于哪个内容的详情页推荐中，<b>相关推荐场景强烈建议</b>
                     * @param _referrerGoodsId 相关推荐场景点击进入详情页的内容id，该字段用来注明行为发生于哪个内容的详情页推荐中，<b>相关推荐场景强烈建议</b>
                     * 
                     */
                    void SetReferrerGoodsId(const std::string& _referrerGoodsId);

                    /**
                     * 判断参数 ReferrerGoodsId 是否已赋值
                     * @return ReferrerGoodsId 是否已赋值
                     * 
                     */
                    bool ReferrerGoodsIdHasBeenSet() const;

                    /**
                     * 获取订单商品购买个数，当behaviorType=order，buy或addcart时有值，<b>用作特征</b>
                     * @return OrderGoodsCnt 订单商品购买个数，当behaviorType=order，buy或addcart时有值，<b>用作特征</b>
                     * 
                     */
                    int64_t GetOrderGoodsCnt() const;

                    /**
                     * 设置订单商品购买个数，当behaviorType=order，buy或addcart时有值，<b>用作特征</b>
                     * @param _orderGoodsCnt 订单商品购买个数，当behaviorType=order，buy或addcart时有值，<b>用作特征</b>
                     * 
                     */
                    void SetOrderGoodsCnt(const int64_t& _orderGoodsCnt);

                    /**
                     * 判断参数 OrderGoodsCnt 是否已赋值
                     * @return OrderGoodsCnt 是否已赋值
                     * 
                     */
                    bool OrderGoodsCntHasBeenSet() const;

                    /**
                     * 获取订单总金额，当behaviorType=order或buy时有值（单位：元，统一货币体系，如统一为RMB，美元等），<b>用作特征</b>
                     * @return OrderAmount 订单总金额，当behaviorType=order或buy时有值（单位：元，统一货币体系，如统一为RMB，美元等），<b>用作特征</b>
                     * 
                     */
                    double GetOrderAmount() const;

                    /**
                     * 设置订单总金额，当behaviorType=order或buy时有值（单位：元，统一货币体系，如统一为RMB，美元等），<b>用作特征</b>
                     * @param _orderAmount 订单总金额，当behaviorType=order或buy时有值（单位：元，统一货币体系，如统一为RMB，美元等），<b>用作特征</b>
                     * 
                     */
                    void SetOrderAmount(const double& _orderAmount);

                    /**
                     * 判断参数 OrderAmount 是否已赋值
                     * @return OrderAmount 是否已赋值
                     * 
                     */
                    bool OrderAmountHasBeenSet() const;

                    /**
                     * 获取用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     * @return UserIdList 用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     * 
                     */
                    std::vector<StrUserIdInfo> GetUserIdList() const;

                    /**
                     * 设置用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     * @param _userIdList 用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     * 
                     */
                    void SetUserIdList(const std::vector<StrUserIdInfo>& _userIdList);

                    /**
                     * 判断参数 UserIdList 是否已赋值
                     * @return UserIdList 是否已赋值
                     * 
                     */
                    bool UserIdListHasBeenSet() const;

                    /**
                     * 获取行为发生时用户基础特征信息，<b>用作特征</b>
                     * @return UserPortraitInfo 行为发生时用户基础特征信息，<b>用作特征</b>
                     * 
                     */
                    UserPortraitInfo GetUserPortraitInfo() const;

                    /**
                     * 设置行为发生时用户基础特征信息，<b>用作特征</b>
                     * @param _userPortraitInfo 行为发生时用户基础特征信息，<b>用作特征</b>
                     * 
                     */
                    void SetUserPortraitInfo(const UserPortraitInfo& _userPortraitInfo);

                    /**
                     * 判断参数 UserPortraitInfo 是否已赋值
                     * @return UserPortraitInfo 是否已赋值
                     * 
                     */
                    bool UserPortraitInfoHasBeenSet() const;

                    /**
                     * 获取标识行为发生在模块内的具体位置，如1、2、...
<b>用作上下文特征，刻画不同位置用户行为分布的差异</b>
                     * @return Position 标识行为发生在模块内的具体位置，如1、2、...
<b>用作上下文特征，刻画不同位置用户行为分布的差异</b>
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置标识行为发生在模块内的具体位置，如1、2、...
<b>用作上下文特征，刻画不同位置用户行为分布的差异</b>
                     * @param _position 标识行为发生在模块内的具体位置，如1、2、...
<b>用作上下文特征，刻画不同位置用户行为分布的差异</b>
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取json字符串，<b>用于行为数据的扩展</b>
                     * @return Extension json字符串，<b>用于行为数据的扩展</b>
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置json字符串，<b>用于行为数据的扩展</b>
                     * @param _extension json字符串，<b>用于行为数据的扩展</b>
                     * 
                     */
                    void SetExtension(const std::string& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                private:

                    /**
                     * 用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 商品唯一ID，skuId或spuId，客户根据需求自行决定商品主键粒度
                     */
                    std::string m_goodsId;
                    bool m_goodsIdHasBeenSet;

                    /**
                     * 行为类型：<br> ● expose - 曝光，<b>必须</b><br> ● click - 点击，<b>必须</b><br/>  ● stay - 详情页停留时长，<b>强烈建议</b><br/>  ● videoover - 视频播放时长，<b>强烈建议</b><br/> ●  like - 点赞&喜欢，<b>正效果</b><br/> ● collect - 收藏，<b>正效果</b><br/> ●  share - 转发&分享，<b>正效果</b><br/> ● reward - 打赏，<b>正效果</b><br/> ● unlike - 踩&不喜欢，<b>负效果</b><br/> ●  comment - 评论<br/> ●  order - 下单<br/> ●  buy - 购买成功<br/> ●  addcart - 加入购物车<br/>   
不支持的行为类型，可以映射到未被使用的其他行为类型。如实际业务数据中有私信行为，没有收藏行为，可以将私信行为映射到收藏行为
                     */
                    std::string m_behaviorType;
                    bool m_behaviorTypeHasBeenSet;

                    /**
                     * 行为类型对应的行为值：<br/> ● expose - 曝光，固定填1<br/> ● click - 点击，固定填1<br/>  ● stay - 详情页停留时长，填停留秒数，取值[1-86400]<br/>  ● videoover - 视频播放时长，填播放结束的秒数，取值[1-86400]<br/> ●  like - 点赞&喜欢，固定填1<br/> ● collect - 收藏，固定填1<br/> ●  share - 转发&分享，固定填1<br/> ● reward - 打赏，填打赏金额，没有则填1<br/> ● unlike - 踩&不喜欢，填不喜欢的原因，没有则填1<br/> ●  comment - 评论，填评论内容，如“上海加油”<br/> ●  order - 下单，固定填1<br/> ●  buy - 购买成功，固定填1<br/> ●  addcart - 加入购物车，固定填1
                     */
                    std::string m_behaviorValue;
                    bool m_behaviorValueHasBeenSet;

                    /**
                     * 行为发生的时间戳： 秒级时间戳，尽量实时上报，最长不超过半小时否则会影响推荐结果的准确性
                     */
                    int64_t m_behaviorTimestamp;
                    bool m_behaviorTimestampHasBeenSet;

                    /**
                     * 行为发生的场景ID，在控制台创建场景后获取
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 算法来源： <br>● business 业务自己的算法对照组<br/> ● tencent 腾讯算法<br/> ● other 其他算法<br/>默认为tencent，区分行为来源于哪个算法，<b>用于Poc阶段的效果对比验证</b>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 标识行为发生在app内哪个页面，取值客户自定，可以是明文或id，建议传明文便于理解、分析，如首页，发现页，用户中心等
<b>用作上下文特征，刻画不同场景用户行为分布的差异</b>
                     */
                    std::string m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 标识行为发生在页面的哪一区块，取值客户自定，可以是明文或id，建议传明文便于理解、分析，如横幅、广告位、猜你喜欢等
<b>用作上下文特征，刻画不同模块用户行为分布的差异</b>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 推荐追踪ID，使用推荐结果中返回的GoodsTraceId填入。 
注意：如果和推荐结果中的GoodsTraceId不同，会影响行为特征归因，影响推荐算法效果。<b>强烈建议</b>
                     */
                    std::string m_goodsTraceId;
                    bool m_goodsTraceIdHasBeenSet;

                    /**
                     * 相关推荐场景点击进入详情页的内容id，该字段用来注明行为发生于哪个内容的详情页推荐中，<b>相关推荐场景强烈建议</b>
                     */
                    std::string m_referrerGoodsId;
                    bool m_referrerGoodsIdHasBeenSet;

                    /**
                     * 订单商品购买个数，当behaviorType=order，buy或addcart时有值，<b>用作特征</b>
                     */
                    int64_t m_orderGoodsCnt;
                    bool m_orderGoodsCntHasBeenSet;

                    /**
                     * 订单总金额，当behaviorType=order或buy时有值（单位：元，统一货币体系，如统一为RMB，美元等），<b>用作特征</b>
                     */
                    double m_orderAmount;
                    bool m_orderAmountHasBeenSet;

                    /**
                     * 用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     */
                    std::vector<StrUserIdInfo> m_userIdList;
                    bool m_userIdListHasBeenSet;

                    /**
                     * 行为发生时用户基础特征信息，<b>用作特征</b>
                     */
                    UserPortraitInfo m_userPortraitInfo;
                    bool m_userPortraitInfoHasBeenSet;

                    /**
                     * 标识行为发生在模块内的具体位置，如1、2、...
<b>用作上下文特征，刻画不同位置用户行为分布的差异</b>
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * json字符串，<b>用于行为数据的扩展</b>
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_GOODSBEHAVIORINFO_H_
