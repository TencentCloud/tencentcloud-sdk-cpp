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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_FLATTENLISTMEDIAREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_FLATTENLISTMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * FlattenListMedia请求参数结构体
                */
                class FlattenListMediaRequest : public AbstractModel
                {
                public:
                    FlattenListMediaRequest();
                    ~FlattenListMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param Platform 平台名称，指定访问的平台。
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取媒体分类路径，例如填写"/a/b"，则代表平铺该分类路径下及其子分类路径下的媒体信息。
                     * @return ClassPath 媒体分类路径，例如填写"/a/b"，则代表平铺该分类路径下及其子分类路径下的媒体信息。
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置媒体分类路径，例如填写"/a/b"，则代表平铺该分类路径下及其子分类路径下的媒体信息。
                     * @param ClassPath 媒体分类路径，例如填写"/a/b"，则代表平铺该分类路径下及其子分类路径下的媒体信息。
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     */
                    bool ClassPathHasBeenSet() const;

                    /**
                     * 获取媒体分类的归属者。
                     * @return Owner 媒体分类的归属者。
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置媒体分类的归属者。
                     * @param Owner 媒体分类的归属者。
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param Offset 分页偏移量，默认值：0。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：10，最大值：50。
                     * @return Limit 返回记录条数，默认值：10，最大值：50。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：10，最大值：50。
                     * @param Limit 返回记录条数，默认值：10，最大值：50。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取操作者。填写用户的 Id，用于标识调用者及校验媒体访问权限。
                     * @return Operator 操作者。填写用户的 Id，用于标识调用者及校验媒体访问权限。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。填写用户的 Id，用于标识调用者及校验媒体访问权限。
                     * @param Operator 操作者。填写用户的 Id，用于标识调用者及校验媒体访问权限。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 媒体分类路径，例如填写"/a/b"，则代表平铺该分类路径下及其子分类路径下的媒体信息。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                    /**
                     * 媒体分类的归属者。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：10，最大值：50。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 操作者。填写用户的 Id，用于标识调用者及校验媒体访问权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_FLATTENLISTMEDIAREQUEST_H_
