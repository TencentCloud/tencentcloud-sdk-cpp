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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_DESCRIBEGOODSRECOMMENDREQUEST_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_DESCRIBEGOODSRECOMMENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeGoodsRecommend请求参数结构体
                */
                class DescribeGoodsRecommendRequest : public AbstractModel
                {
                public:
                    DescribeGoodsRecommendRequest();
                    ~DescribeGoodsRecommendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，在控制台获取
                     * @return InstanceId 实例ID，在控制台获取
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，在控制台获取
                     * @param _instanceId 实例ID，在控制台获取
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取场景ID，在控制台创建场景后获取
                     * @return SceneId 场景ID，在控制台创建场景后获取
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置场景ID，在控制台创建场景后获取
                     * @param _sceneId 场景ID，在控制台创建场景后获取
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
                     * 获取用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识，需和行为数据上报接口中的UserId一致，否则影响特征关联
                     * @return UserId 用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识，需和行为数据上报接口中的UserId一致，否则影响特征关联
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识，需和行为数据上报接口中的UserId一致，否则影响特征关联
                     * @param _userId 用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识，需和行为数据上报接口中的UserId一致，否则影响特征关联
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
                     * 获取用户设备ID数组，可传入用户的多个类型ID，用于关联画像信息
                     * @return UserIdList 用户设备ID数组，可传入用户的多个类型ID，用于关联画像信息
                     * 
                     */
                    std::vector<StrUserIdInfo> GetUserIdList() const;

                    /**
                     * 设置用户设备ID数组，可传入用户的多个类型ID，用于关联画像信息
                     * @param _userIdList 用户设备ID数组，可传入用户的多个类型ID，用于关联画像信息
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
                     * 获取推荐返回数量，默认10个，最多支持50个的内容返回。如果有更多数量要求，<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决
                     * @return GoodsCnt 推荐返回数量，默认10个，最多支持50个的内容返回。如果有更多数量要求，<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决
                     * 
                     */
                    int64_t GetGoodsCnt() const;

                    /**
                     * 设置推荐返回数量，默认10个，最多支持50个的内容返回。如果有更多数量要求，<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决
                     * @param _goodsCnt 推荐返回数量，默认10个，最多支持50个的内容返回。如果有更多数量要求，<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决
                     * 
                     */
                    void SetGoodsCnt(const int64_t& _goodsCnt);

                    /**
                     * 判断参数 GoodsCnt 是否已赋值
                     * @return GoodsCnt 是否已赋值
                     * 
                     */
                    bool GoodsCntHasBeenSet() const;

                    /**
                     * 获取当场景是相关推荐时该值必填，场景是非相关推荐时该值无效
                     * @return CurrentGoodsId 当场景是相关推荐时该值必填，场景是非相关推荐时该值无效
                     * 
                     */
                    std::string GetCurrentGoodsId() const;

                    /**
                     * 设置当场景是相关推荐时该值必填，场景是非相关推荐时该值无效
                     * @param _currentGoodsId 当场景是相关推荐时该值必填，场景是非相关推荐时该值无效
                     * 
                     */
                    void SetCurrentGoodsId(const std::string& _currentGoodsId);

                    /**
                     * 判断参数 CurrentGoodsId 是否已赋值
                     * @return CurrentGoodsId 是否已赋值
                     * 
                     */
                    bool CurrentGoodsIdHasBeenSet() const;

                    /**
                     * 获取用户的实时特征信息，用作特征
                     * @return UserPortraitInfo 用户的实时特征信息，用作特征
                     * 
                     */
                    UserPortraitInfo GetUserPortraitInfo() const;

                    /**
                     * 设置用户的实时特征信息，用作特征
                     * @param _userPortraitInfo 用户的实时特征信息，用作特征
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
                     * 获取本次请求针对该用户需要过滤的物品列表(不超过100个)
                     * @return BlackGoodsList 本次请求针对该用户需要过滤的物品列表(不超过100个)
                     * 
                     */
                    std::vector<std::string> GetBlackGoodsList() const;

                    /**
                     * 设置本次请求针对该用户需要过滤的物品列表(不超过100个)
                     * @param _blackGoodsList 本次请求针对该用户需要过滤的物品列表(不超过100个)
                     * 
                     */
                    void SetBlackGoodsList(const std::vector<std::string>& _blackGoodsList);

                    /**
                     * 判断参数 BlackGoodsList 是否已赋值
                     * @return BlackGoodsList 是否已赋值
                     * 
                     */
                    bool BlackGoodsListHasBeenSet() const;

                    /**
                     * 获取json字符串，扩展字段
                     * @return Extension json字符串，扩展字段
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置json字符串，扩展字段
                     * @param _extension json字符串，扩展字段
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
                     * 实例ID，在控制台获取
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 场景ID，在控制台创建场景后获取
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识，需和行为数据上报接口中的UserId一致，否则影响特征关联
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户设备ID数组，可传入用户的多个类型ID，用于关联画像信息
                     */
                    std::vector<StrUserIdInfo> m_userIdList;
                    bool m_userIdListHasBeenSet;

                    /**
                     * 推荐返回数量，默认10个，最多支持50个的内容返回。如果有更多数量要求，<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决
                     */
                    int64_t m_goodsCnt;
                    bool m_goodsCntHasBeenSet;

                    /**
                     * 当场景是相关推荐时该值必填，场景是非相关推荐时该值无效
                     */
                    std::string m_currentGoodsId;
                    bool m_currentGoodsIdHasBeenSet;

                    /**
                     * 用户的实时特征信息，用作特征
                     */
                    UserPortraitInfo m_userPortraitInfo;
                    bool m_userPortraitInfoHasBeenSet;

                    /**
                     * 本次请求针对该用户需要过滤的物品列表(不超过100个)
                     */
                    std::vector<std::string> m_blackGoodsList;
                    bool m_blackGoodsListHasBeenSet;

                    /**
                     * json字符串，扩展字段
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_DESCRIBEGOODSRECOMMENDREQUEST_H_
