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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_FEEDBEHAVIORINFO_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_FEEDBEHAVIORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220805/model/UserIdInfo.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220805
        {
            namespace Model
            {
                /**
                * 信息流行为
                */
                class FeedBehaviorInfo : public AbstractModel
                {
                public:
                    FeedBehaviorInfo();
                    ~FeedBehaviorInfo() = default;
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
                     * 获取内容唯一id
                     * @return ItemId 内容唯一id
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置内容唯一id
                     * @param _itemId 内容唯一id
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
                     * 获取行为类型：<br> ● expose - 曝光，<b>必须</b><br> ● click - 点击，<b>必须</b><br/>  ● stay - 详情页停留时长，<b>强烈建议</b><br/>  ● videoover - 视频播放时长，<b>强烈建议</b><br/> ●  like - 点赞&喜欢，<b>正效果</b><br/> ● collect - 收藏，<b>正效果</b><br/> ●  share - 转发&分享，<b>正效果</b><br/> ● reward - 打赏，<b>正效果</b><br/> ● unlike - 踩&不喜欢，<b>负效果</b><br/> ●  comment - 评论<br/> 不支持的行为类型，可以映射到未被使用的其他行为类型。如实际业务数据中有私信行为，没有收藏行为，可以将私信行为映射到收藏行为
                     * @return BehaviorType 行为类型：<br> ● expose - 曝光，<b>必须</b><br> ● click - 点击，<b>必须</b><br/>  ● stay - 详情页停留时长，<b>强烈建议</b><br/>  ● videoover - 视频播放时长，<b>强烈建议</b><br/> ●  like - 点赞&喜欢，<b>正效果</b><br/> ● collect - 收藏，<b>正效果</b><br/> ●  share - 转发&分享，<b>正效果</b><br/> ● reward - 打赏，<b>正效果</b><br/> ● unlike - 踩&不喜欢，<b>负效果</b><br/> ●  comment - 评论<br/> 不支持的行为类型，可以映射到未被使用的其他行为类型。如实际业务数据中有私信行为，没有收藏行为，可以将私信行为映射到收藏行为
                     * 
                     */
                    std::string GetBehaviorType() const;

                    /**
                     * 设置行为类型：<br> ● expose - 曝光，<b>必须</b><br> ● click - 点击，<b>必须</b><br/>  ● stay - 详情页停留时长，<b>强烈建议</b><br/>  ● videoover - 视频播放时长，<b>强烈建议</b><br/> ●  like - 点赞&喜欢，<b>正效果</b><br/> ● collect - 收藏，<b>正效果</b><br/> ●  share - 转发&分享，<b>正效果</b><br/> ● reward - 打赏，<b>正效果</b><br/> ● unlike - 踩&不喜欢，<b>负效果</b><br/> ●  comment - 评论<br/> 不支持的行为类型，可以映射到未被使用的其他行为类型。如实际业务数据中有私信行为，没有收藏行为，可以将私信行为映射到收藏行为
                     * @param _behaviorType 行为类型：<br> ● expose - 曝光，<b>必须</b><br> ● click - 点击，<b>必须</b><br/>  ● stay - 详情页停留时长，<b>强烈建议</b><br/>  ● videoover - 视频播放时长，<b>强烈建议</b><br/> ●  like - 点赞&喜欢，<b>正效果</b><br/> ● collect - 收藏，<b>正效果</b><br/> ●  share - 转发&分享，<b>正效果</b><br/> ● reward - 打赏，<b>正效果</b><br/> ● unlike - 踩&不喜欢，<b>负效果</b><br/> ●  comment - 评论<br/> 不支持的行为类型，可以映射到未被使用的其他行为类型。如实际业务数据中有私信行为，没有收藏行为，可以将私信行为映射到收藏行为
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
                     * 获取行为类型对应的行为值：<br/> ● expose - 曝光，固定填1<br/> ● click - 点击，固定填1<br/>  ● stay - 详情页停留时长，填停留秒数，取值[1-86400]<br/>  ● videoover - 视频播放时长，填播放结束的秒数，取值[1-86400]<br/> ●  like - 点赞&喜欢，固定填1<br/> ● collect - 收藏，固定填1<br/> ●  share - 转发&分享，固定填1<br/> ● reward - 打赏，填打赏金额，没有则填1<br/> ● unlike - 踩&不喜欢，填不喜欢的原因，没有则填1<br/> ●  comment - 评论，填评论内容，如“上海加油”
                     * @return BehaviorValue 行为类型对应的行为值：<br/> ● expose - 曝光，固定填1<br/> ● click - 点击，固定填1<br/>  ● stay - 详情页停留时长，填停留秒数，取值[1-86400]<br/>  ● videoover - 视频播放时长，填播放结束的秒数，取值[1-86400]<br/> ●  like - 点赞&喜欢，固定填1<br/> ● collect - 收藏，固定填1<br/> ●  share - 转发&分享，固定填1<br/> ● reward - 打赏，填打赏金额，没有则填1<br/> ● unlike - 踩&不喜欢，填不喜欢的原因，没有则填1<br/> ●  comment - 评论，填评论内容，如“上海加油”
                     * 
                     */
                    std::string GetBehaviorValue() const;

                    /**
                     * 设置行为类型对应的行为值：<br/> ● expose - 曝光，固定填1<br/> ● click - 点击，固定填1<br/>  ● stay - 详情页停留时长，填停留秒数，取值[1-86400]<br/>  ● videoover - 视频播放时长，填播放结束的秒数，取值[1-86400]<br/> ●  like - 点赞&喜欢，固定填1<br/> ● collect - 收藏，固定填1<br/> ●  share - 转发&分享，固定填1<br/> ● reward - 打赏，填打赏金额，没有则填1<br/> ● unlike - 踩&不喜欢，填不喜欢的原因，没有则填1<br/> ●  comment - 评论，填评论内容，如“上海加油”
                     * @param _behaviorValue 行为类型对应的行为值：<br/> ● expose - 曝光，固定填1<br/> ● click - 点击，固定填1<br/>  ● stay - 详情页停留时长，填停留秒数，取值[1-86400]<br/>  ● videoover - 视频播放时长，填播放结束的秒数，取值[1-86400]<br/> ●  like - 点赞&喜欢，固定填1<br/> ● collect - 收藏，固定填1<br/> ●  share - 转发&分享，固定填1<br/> ● reward - 打赏，填打赏金额，没有则填1<br/> ● unlike - 踩&不喜欢，填不喜欢的原因，没有则填1<br/> ●  comment - 评论，填评论内容，如“上海加油”
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
                     * 获取推荐追踪ID，使用推荐结果中返回的ItemTraceId填入。 
注意：如果和推荐结果中的ItemTraceId不同，会影响行为特征归因，影响推荐算法效果
                     * @return ItemTraceId 推荐追踪ID，使用推荐结果中返回的ItemTraceId填入。 
注意：如果和推荐结果中的ItemTraceId不同，会影响行为特征归因，影响推荐算法效果
                     * 
                     */
                    std::string GetItemTraceId() const;

                    /**
                     * 设置推荐追踪ID，使用推荐结果中返回的ItemTraceId填入。 
注意：如果和推荐结果中的ItemTraceId不同，会影响行为特征归因，影响推荐算法效果
                     * @param _itemTraceId 推荐追踪ID，使用推荐结果中返回的ItemTraceId填入。 
注意：如果和推荐结果中的ItemTraceId不同，会影响行为特征归因，影响推荐算法效果
                     * 
                     */
                    void SetItemTraceId(const std::string& _itemTraceId);

                    /**
                     * 判断参数 ItemTraceId 是否已赋值
                     * @return ItemTraceId 是否已赋值
                     * 
                     */
                    bool ItemTraceIdHasBeenSet() const;

                    /**
                     * 获取内容类型，跟内容上报类型一致，用于效果分析，不做内容校验，<b>强烈建议</b>
                     * @return ItemType 内容类型，跟内容上报类型一致，用于效果分析，不做内容校验，<b>强烈建议</b>
                     * 
                     */
                    std::string GetItemType() const;

                    /**
                     * 设置内容类型，跟内容上报类型一致，用于效果分析，不做内容校验，<b>强烈建议</b>
                     * @param _itemType 内容类型，跟内容上报类型一致，用于效果分析，不做内容校验，<b>强烈建议</b>
                     * 
                     */
                    void SetItemType(const std::string& _itemType);

                    /**
                     * 判断参数 ItemType 是否已赋值
                     * @return ItemType 是否已赋值
                     * 
                     */
                    bool ItemTypeHasBeenSet() const;

                    /**
                     * 获取相关推荐场景点击进入详情页的内容id，该字段用来注明行为发生于哪个内容的详情页推荐中，<b>相关推荐场景强烈建议</b>
                     * @return ReferrerItemId 相关推荐场景点击进入详情页的内容id，该字段用来注明行为发生于哪个内容的详情页推荐中，<b>相关推荐场景强烈建议</b>
                     * 
                     */
                    std::string GetReferrerItemId() const;

                    /**
                     * 设置相关推荐场景点击进入详情页的内容id，该字段用来注明行为发生于哪个内容的详情页推荐中，<b>相关推荐场景强烈建议</b>
                     * @param _referrerItemId 相关推荐场景点击进入详情页的内容id，该字段用来注明行为发生于哪个内容的详情页推荐中，<b>相关推荐场景强烈建议</b>
                     * 
                     */
                    void SetReferrerItemId(const std::string& _referrerItemId);

                    /**
                     * 判断参数 ReferrerItemId 是否已赋值
                     * @return ReferrerItemId 是否已赋值
                     * 
                     */
                    bool ReferrerItemIdHasBeenSet() const;

                    /**
                     * 获取用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     * @return UserIdList 用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     * 
                     */
                    std::vector<UserIdInfo> GetUserIdList() const;

                    /**
                     * 设置用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     * @param _userIdList 用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
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
                     * 获取行为发生时的国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     * @return Country 行为发生时的国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置行为发生时的国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     * @param _country 行为发生时的国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取行为发生时的省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     * @return Province 行为发生时的省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置行为发生时的省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     * @param _province 行为发生时的省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取行为发生时的城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     * @return City 行为发生时的城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置行为发生时的城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     * @param _city 行为发生时的城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取行为发生时的客户端ip，<b>用作特征</b>
                     * @return IP 行为发生时的客户端ip，<b>用作特征</b>
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置行为发生时的客户端ip，<b>用作特征</b>
                     * @param _iP 行为发生时的客户端ip，<b>用作特征</b>
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取行为发生时的客户端网络类型，<b>用作特征</b>
                     * @return Network 行为发生时的客户端网络类型，<b>用作特征</b>
                     * 
                     */
                    std::string GetNetwork() const;

                    /**
                     * 设置行为发生时的客户端网络类型，<b>用作特征</b>
                     * @param _network 行为发生时的客户端网络类型，<b>用作特征</b>
                     * 
                     */
                    void SetNetwork(const std::string& _network);

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                    /**
                     * 获取行为发生时的客户端平台，ios/android/h5，<b>用作特征</b>
                     * @return Platform 行为发生时的客户端平台，ios/android/h5，<b>用作特征</b>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置行为发生时的客户端平台，ios/android/h5，<b>用作特征</b>
                     * @param _platform 行为发生时的客户端平台，ios/android/h5，<b>用作特征</b>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取行为发生时的客户端app版本，<b>用作特征</b>
                     * @return AppVersion 行为发生时的客户端app版本，<b>用作特征</b>
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置行为发生时的客户端app版本，<b>用作特征</b>
                     * @param _appVersion 行为发生时的客户端app版本，<b>用作特征</b>
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取行为发生时的操作系统版本，<b>用作特征</b>
                     * @return OsVersion 行为发生时的操作系统版本，<b>用作特征</b>
                     * 
                     */
                    std::string GetOsVersion() const;

                    /**
                     * 设置行为发生时的操作系统版本，<b>用作特征</b>
                     * @param _osVersion 行为发生时的操作系统版本，<b>用作特征</b>
                     * 
                     */
                    void SetOsVersion(const std::string& _osVersion);

                    /**
                     * 判断参数 OsVersion 是否已赋值
                     * @return OsVersion 是否已赋值
                     * 
                     */
                    bool OsVersionHasBeenSet() const;

                    /**
                     * 获取行为发生时的机型，<b>用作特征</b>
                     * @return DeviceModel 行为发生时的机型，<b>用作特征</b>
                     * 
                     */
                    std::string GetDeviceModel() const;

                    /**
                     * 设置行为发生时的机型，<b>用作特征</b>
                     * @param _deviceModel 行为发生时的机型，<b>用作特征</b>
                     * 
                     */
                    void SetDeviceModel(const std::string& _deviceModel);

                    /**
                     * 判断参数 DeviceModel 是否已赋值
                     * @return DeviceModel 是否已赋值
                     * 
                     */
                    bool DeviceModelHasBeenSet() const;

                    /**
                     * 获取json字符串，<b>用于行为数据的扩展</b>，需要base64加密
                     * @return Extension json字符串，<b>用于行为数据的扩展</b>，需要base64加密
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置json字符串，<b>用于行为数据的扩展</b>，需要base64加密
                     * @param _extension json字符串，<b>用于行为数据的扩展</b>，需要base64加密
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
                     * 内容唯一id
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 行为类型：<br> ● expose - 曝光，<b>必须</b><br> ● click - 点击，<b>必须</b><br/>  ● stay - 详情页停留时长，<b>强烈建议</b><br/>  ● videoover - 视频播放时长，<b>强烈建议</b><br/> ●  like - 点赞&喜欢，<b>正效果</b><br/> ● collect - 收藏，<b>正效果</b><br/> ●  share - 转发&分享，<b>正效果</b><br/> ● reward - 打赏，<b>正效果</b><br/> ● unlike - 踩&不喜欢，<b>负效果</b><br/> ●  comment - 评论<br/> 不支持的行为类型，可以映射到未被使用的其他行为类型。如实际业务数据中有私信行为，没有收藏行为，可以将私信行为映射到收藏行为
                     */
                    std::string m_behaviorType;
                    bool m_behaviorTypeHasBeenSet;

                    /**
                     * 行为类型对应的行为值：<br/> ● expose - 曝光，固定填1<br/> ● click - 点击，固定填1<br/>  ● stay - 详情页停留时长，填停留秒数，取值[1-86400]<br/>  ● videoover - 视频播放时长，填播放结束的秒数，取值[1-86400]<br/> ●  like - 点赞&喜欢，固定填1<br/> ● collect - 收藏，固定填1<br/> ●  share - 转发&分享，固定填1<br/> ● reward - 打赏，填打赏金额，没有则填1<br/> ● unlike - 踩&不喜欢，填不喜欢的原因，没有则填1<br/> ●  comment - 评论，填评论内容，如“上海加油”
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
                     * 推荐追踪ID，使用推荐结果中返回的ItemTraceId填入。 
注意：如果和推荐结果中的ItemTraceId不同，会影响行为特征归因，影响推荐算法效果
                     */
                    std::string m_itemTraceId;
                    bool m_itemTraceIdHasBeenSet;

                    /**
                     * 内容类型，跟内容上报类型一致，用于效果分析，不做内容校验，<b>强烈建议</b>
                     */
                    std::string m_itemType;
                    bool m_itemTypeHasBeenSet;

                    /**
                     * 相关推荐场景点击进入详情页的内容id，该字段用来注明行为发生于哪个内容的详情页推荐中，<b>相关推荐场景强烈建议</b>
                     */
                    std::string m_referrerItemId;
                    bool m_referrerItemIdHasBeenSet;

                    /**
                     * 用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     */
                    std::vector<UserIdInfo> m_userIdList;
                    bool m_userIdListHasBeenSet;

                    /**
                     * 算法来源： <br>● business 业务自己的算法对照组<br/> ● tencent 腾讯算法<br/> ● other 其他算法<br/>默认为tencent，区分行为来源于哪个算法，<b>用于Poc阶段的效果对比验证</b>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 行为发生时的国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”，<b>用作特征</b>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 行为发生时的省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”，<b>用作特征</b>
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 行为发生时的城市地区，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，其他国家统一用国际公认城市简称或者城市编码，<b>用作特征</b>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 行为发生时的客户端ip，<b>用作特征</b>
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 行为发生时的客户端网络类型，<b>用作特征</b>
                     */
                    std::string m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * 行为发生时的客户端平台，ios/android/h5，<b>用作特征</b>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 行为发生时的客户端app版本，<b>用作特征</b>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 行为发生时的操作系统版本，<b>用作特征</b>
                     */
                    std::string m_osVersion;
                    bool m_osVersionHasBeenSet;

                    /**
                     * 行为发生时的机型，<b>用作特征</b>
                     */
                    std::string m_deviceModel;
                    bool m_deviceModelHasBeenSet;

                    /**
                     * json字符串，<b>用于行为数据的扩展</b>，需要base64加密
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_FEEDBEHAVIORINFO_H_
