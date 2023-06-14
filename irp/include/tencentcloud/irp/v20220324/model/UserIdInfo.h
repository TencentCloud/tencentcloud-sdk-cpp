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

#ifndef TENCENTCLOUD_IRP_V20220324_MODEL_USERIDINFO_H_
#define TENCENTCLOUD_IRP_V20220324_MODEL_USERIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class UserIdInfo : public AbstractModel
                {
                public:
                    UserIdInfo();
                    ~UserIdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID类型：
1 - qq
2 - qq_md5：md5后的qq
3 - imei：设备imei（安卓10之后不会再授权imei，安卓10之后的imei映射关系可能拿不到，故安卓10之后的设备建议用oaid）
4 - imei_md5：md5后的imei
5 - idfa: Apple 向用户设备随机分配的设备标识符
6 - idfa_md5：md5之后的idfa
7 - gdt_openid：广点通生成的openid
8 - oaid：安卓10之后一种非永久性设备标识符
9 - oaid_md5：md5后的oaid
10 - wx_openid：微信openid
11 - qq_openid：QQ的openid
12 - phone：电话号码
13 - phone_md5：md5后的电话号码
14 - phone_sha256：SHA256加密的手机号
15 - phone_sm3：国密SM3加密的手机号
1000 - 客户自定义id
                     * @return UserIdType 用户ID类型：
1 - qq
2 - qq_md5：md5后的qq
3 - imei：设备imei（安卓10之后不会再授权imei，安卓10之后的imei映射关系可能拿不到，故安卓10之后的设备建议用oaid）
4 - imei_md5：md5后的imei
5 - idfa: Apple 向用户设备随机分配的设备标识符
6 - idfa_md5：md5之后的idfa
7 - gdt_openid：广点通生成的openid
8 - oaid：安卓10之后一种非永久性设备标识符
9 - oaid_md5：md5后的oaid
10 - wx_openid：微信openid
11 - qq_openid：QQ的openid
12 - phone：电话号码
13 - phone_md5：md5后的电话号码
14 - phone_sha256：SHA256加密的手机号
15 - phone_sm3：国密SM3加密的手机号
1000 - 客户自定义id
                     * 
                     */
                    int64_t GetUserIdType() const;

                    /**
                     * 设置用户ID类型：
1 - qq
2 - qq_md5：md5后的qq
3 - imei：设备imei（安卓10之后不会再授权imei，安卓10之后的imei映射关系可能拿不到，故安卓10之后的设备建议用oaid）
4 - imei_md5：md5后的imei
5 - idfa: Apple 向用户设备随机分配的设备标识符
6 - idfa_md5：md5之后的idfa
7 - gdt_openid：广点通生成的openid
8 - oaid：安卓10之后一种非永久性设备标识符
9 - oaid_md5：md5后的oaid
10 - wx_openid：微信openid
11 - qq_openid：QQ的openid
12 - phone：电话号码
13 - phone_md5：md5后的电话号码
14 - phone_sha256：SHA256加密的手机号
15 - phone_sm3：国密SM3加密的手机号
1000 - 客户自定义id
                     * @param _userIdType 用户ID类型：
1 - qq
2 - qq_md5：md5后的qq
3 - imei：设备imei（安卓10之后不会再授权imei，安卓10之后的imei映射关系可能拿不到，故安卓10之后的设备建议用oaid）
4 - imei_md5：md5后的imei
5 - idfa: Apple 向用户设备随机分配的设备标识符
6 - idfa_md5：md5之后的idfa
7 - gdt_openid：广点通生成的openid
8 - oaid：安卓10之后一种非永久性设备标识符
9 - oaid_md5：md5后的oaid
10 - wx_openid：微信openid
11 - qq_openid：QQ的openid
12 - phone：电话号码
13 - phone_md5：md5后的电话号码
14 - phone_sha256：SHA256加密的手机号
15 - phone_sm3：国密SM3加密的手机号
1000 - 客户自定义id
                     * 
                     */
                    void SetUserIdType(const int64_t& _userIdType);

                    /**
                     * 判断参数 UserIdType 是否已赋值
                     * @return UserIdType 是否已赋值
                     * 
                     */
                    bool UserIdTypeHasBeenSet() const;

                    /**
                     * 获取用户id
                     * @return UserId 用户id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户id
                     * @param _userId 用户id
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 用户ID类型：
1 - qq
2 - qq_md5：md5后的qq
3 - imei：设备imei（安卓10之后不会再授权imei，安卓10之后的imei映射关系可能拿不到，故安卓10之后的设备建议用oaid）
4 - imei_md5：md5后的imei
5 - idfa: Apple 向用户设备随机分配的设备标识符
6 - idfa_md5：md5之后的idfa
7 - gdt_openid：广点通生成的openid
8 - oaid：安卓10之后一种非永久性设备标识符
9 - oaid_md5：md5后的oaid
10 - wx_openid：微信openid
11 - qq_openid：QQ的openid
12 - phone：电话号码
13 - phone_md5：md5后的电话号码
14 - phone_sha256：SHA256加密的手机号
15 - phone_sm3：国密SM3加密的手机号
1000 - 客户自定义id
                     */
                    int64_t m_userIdType;
                    bool m_userIdTypeHasBeenSet;

                    /**
                     * 用户id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_MODEL_USERIDINFO_H_
