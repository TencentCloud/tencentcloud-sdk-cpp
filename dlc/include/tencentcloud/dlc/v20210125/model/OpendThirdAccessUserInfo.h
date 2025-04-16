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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_OPENDTHIRDACCESSUSERINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_OPENDTHIRDACCESSUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 开通了第三方访问的用户信息
                */
                class OpendThirdAccessUserInfo : public AbstractModel
                {
                public:
                    OpendThirdAccessUserInfo();
                    ~OpendThirdAccessUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id信息
                     * @return Id id信息
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id信息
                     * @param _id id信息
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户主UIN
                     * @return Uin 用户主UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户主UIN
                     * @param _uin 用户主UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取用户AppId
                     * @return AppId 用户AppId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户AppId
                     * @param _appId 用户AppId
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
                     * 获取开通时间
                     * @return CreateTime 开通时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置开通时间
                     * @param _createTime 开通时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * id信息
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户主UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用户AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 开通时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_OPENDTHIRDACCESSUSERINFO_H_
