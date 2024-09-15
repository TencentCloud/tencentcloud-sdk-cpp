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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_FEEDRECOMMENDREQUEST_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_FEEDRECOMMENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * FeedRecommend请求参数结构体
                */
                class FeedRecommendRequest : public AbstractModel
                {
                public:
                    FeedRecommendRequest();
                    ~FeedRecommendRequest() = default;
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
                     * 获取用户设备ID数组，可传入用户的多个类型ID，用于关联画像信息
                     * @return UserIdList 用户设备ID数组，可传入用户的多个类型ID，用于关联画像信息
                     * 
                     */
                    std::vector<UserIdInfo> GetUserIdList() const;

                    /**
                     * 设置用户设备ID数组，可传入用户的多个类型ID，用于关联画像信息
                     * @param _userIdList 用户设备ID数组，可传入用户的多个类型ID，用于关联画像信息
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
                     * 获取推荐返回数量，默认10个，最多支持50个的内容返回。如果有更多数量要求，<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决
                     * @return ItemCnt 推荐返回数量，默认10个，最多支持50个的内容返回。如果有更多数量要求，<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决
                     * 
                     */
                    int64_t GetItemCnt() const;

                    /**
                     * 设置推荐返回数量，默认10个，最多支持50个的内容返回。如果有更多数量要求，<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决
                     * @param _itemCnt 推荐返回数量，默认10个，最多支持50个的内容返回。如果有更多数量要求，<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决
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
                     * 获取当场景是相关推荐时该值必填，场景是非相关推荐时该值无效
                     * @return CurrentItemId 当场景是相关推荐时该值必填，场景是非相关推荐时该值无效
                     * 
                     */
                    std::string GetCurrentItemId() const;

                    /**
                     * 设置当场景是相关推荐时该值必填，场景是非相关推荐时该值无效
                     * @param _currentItemId 当场景是相关推荐时该值必填，场景是非相关推荐时该值无效
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
                     * 获取扩展字段，json字符串，需要base64加密
                     * @return Extension 扩展字段，json字符串，需要base64加密
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置扩展字段，json字符串，需要base64加密
                     * @param _extension 扩展字段，json字符串，需要base64加密
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
                     * 用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户设备ID数组，可传入用户的多个类型ID，用于关联画像信息
                     */
                    std::vector<UserIdInfo> m_userIdList;
                    bool m_userIdListHasBeenSet;

                    /**
                     * 推荐返回数量，默认10个，最多支持50个的内容返回。如果有更多数量要求，<a href="https://console.cloud.tencent.com/workorder/category" target="_blank">提单</a>沟通解决
                     */
                    int64_t m_itemCnt;
                    bool m_itemCntHasBeenSet;

                    /**
                     * 当场景是相关推荐时该值必填，场景是非相关推荐时该值无效
                     */
                    std::string m_currentItemId;
                    bool m_currentItemIdHasBeenSet;

                    /**
                     * 扩展字段，json字符串，需要base64加密
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_FEEDRECOMMENDREQUEST_H_
