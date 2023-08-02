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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_ANDROIDPLAN_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_ANDROIDPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 渠道合作Android加固策略信息
                */
                class AndroidPlan : public AbstractModel
                {
                public:
                    AndroidPlan();
                    ~AndroidPlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取非必输字段，PlanId 是指本次加固使用的配置策略Id，可通过载入上次配置接口获取。其值非0时，代表引用对应的策略。
                     * @return PlanId 非必输字段，PlanId 是指本次加固使用的配置策略Id，可通过载入上次配置接口获取。其值非0时，代表引用对应的策略。
                     * 
                     */
                    int64_t GetPlanId() const;

                    /**
                     * 设置非必输字段，PlanId 是指本次加固使用的配置策略Id，可通过载入上次配置接口获取。其值非0时，代表引用对应的策略。
                     * @param _planId 非必输字段，PlanId 是指本次加固使用的配置策略Id，可通过载入上次配置接口获取。其值非0时，代表引用对应的策略。
                     * 
                     */
                    void SetPlanId(const int64_t& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取本次操作的包名。
当收费模式是android按年收费和android免费试用的在线加固和输出工具加固时，要求该字段必输，且与AndroidAppInfo.AppPkgName值相等。
                     * @return AppPkgName 本次操作的包名。
当收费模式是android按年收费和android免费试用的在线加固和输出工具加固时，要求该字段必输，且与AndroidAppInfo.AppPkgName值相等。
                     * 
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置本次操作的包名。
当收费模式是android按年收费和android免费试用的在线加固和输出工具加固时，要求该字段必输，且与AndroidAppInfo.AppPkgName值相等。
                     * @param _appPkgName 本次操作的包名。
当收费模式是android按年收费和android免费试用的在线加固和输出工具加固时，要求该字段必输，且与AndroidAppInfo.AppPkgName值相等。
                     * 
                     */
                    void SetAppPkgName(const std::string& _appPkgName);

                    /**
                     * 判断参数 AppPkgName 是否已赋值
                     * @return AppPkgName 是否已赋值
                     * 
                     */
                    bool AppPkgNameHasBeenSet() const;

                    /**
                     * 获取android app的文件类型，本次加固操作的应用类型 。 
android在线加固和输出工具加固必输，其值需等于“apk”或“aab”，且与AndroidAppInfo.AppType值相等。

                     * @return AppType android app的文件类型，本次加固操作的应用类型 。 
android在线加固和输出工具加固必输，其值需等于“apk”或“aab”，且与AndroidAppInfo.AppType值相等。

                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置android app的文件类型，本次加固操作的应用类型 。 
android在线加固和输出工具加固必输，其值需等于“apk”或“aab”，且与AndroidAppInfo.AppType值相等。

                     * @param _appType android app的文件类型，本次加固操作的应用类型 。 
android在线加固和输出工具加固必输，其值需等于“apk”或“aab”，且与AndroidAppInfo.AppType值相等。

                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取android加固必输字段。
加固策略，json格式字符串。
字段说明（0-关闭，1-开启）：
        "enable"=1 #DEX整体加固;
        "antiprotect"=1 #反调试;
        "antirepack"=1 #防重打包、防篡改;
        "dexsig"=1       #签名校验;
        "antimonitor"=1 #防模拟器运行保护;
        "ptrace"=1 #防动态注入、动态调试;
        "so"."enable" = 1 #文件加密;
        "vmp"."enable" = 1 #VMP虚拟化保护;
        "respro"."assets"."enable" = 1 #assets资源文件加密
       "respro"."res"."enable" = 1 #res资源文件加密

so文件加密：
支持5种架构:
apk 格式: /lib/armeabi/libxxx.so,/lib/arm64-v8a/libxxx.so,/lib/armeabi-v7a/libxxx.so,/lib/x86/libxxx.so,/lib/x86_64/libxxx.so
aab格式: /base/lib/armeabi/libxxx.so,/base/lib/arm64-v8a/libxxx.so,/base/lib/armeabi-v7a/libxxx.so,/base/lib/x86/libxxx.so,/base/lib/x86_64/libxxx.so
请列举 SO 库在 apk 文件解压后的完整有效路径，如:/lib/armeabi/libxxx.so；
需要加固的 SO 库需确认为自研的 SO 库，不要加固第三方 SO 库，否则会增加 crash 风险

res资源文件加密注意事项：
请指定需要加密的文件全路径，如：res/layout/1.xml;
res资源文件加密不能加密APP图标
res目录文件，不能加密以下后缀规则的文件".wav", ".mp2", ".mp3", ".ogg", ".aac", ".mpg",".mpeg", ".mid", ".midi", ".smf", ".jet", ".rtttl", ".imy", ".xmf", ".mp4", ".m4a", ".m4v", ".3gp",".3gpp", ".3g2", ".3gpp2", ".amr", ".awb", ".wma", ".wmv"

assets资源文件加密注意事项:
请指定需要加密的文件全路径，如：assets/main.js；可以完整路径，也可以相对路径。
如果有通配符需要完整路径 ":all"或者"*"代表所有文件
assets资源文件加密不能加密APP图标
assets目录文件，不能加密以下后缀规则的文件".wav", ".mp2", ".mp3", ".ogg", ".aac", ".mpg",".mpeg", ".mid", ".midi", ".smf", ".jet", ".rtttl", ".imy", ".xmf", ".mp4", ".m4a", ".m4v", ".3gp",".3gpp", ".3g2", ".3gpp2", ".amr", ".awb", ".wma", ".wmv"


apk[dex+so+vmp+res+assets]加固参数示例：
‘{
    "dex": {
        "enable": 1,
        "antiprotect": 1,
        "antirepack": 1,
        "dexsig": 1,
        "antimonitor": 1,
        "ptrace": 1
    },
    "so": {
        "enable": 1,
        "ver": "1.3.3",
        "file": [
            "/lib/armeabi/libtest.so"
        ]
    },
    "vmp": {
        "enable": 1,
        "ndkpath": "/xxx/android-ndk-r10e",
        "profile": "/xxx/vmpprofile.txt",
        "mapping": "/xxx/mapping.txt"
    },
    "respro": {
        "assets": {
            "enable": 1,
            "file": [
                "assets/1.js",
                "assets/2.jpg"
            ]
        },
        "res": {
            "enable": 1,
            "file": [
                "res/layout/1.xml",
                "res/layout/2.xml"
            ]
        }
    }
}’

aab加固方案一 
[dex+res+assets]加固json字符串：
‘{
    "dex": {
        "enable": 1,
        "antiprotect": 1,
        "antimonitor": 1
    },
    "respro": {
        "assets": {
            "enable": 1,
            "file": [
                "assets/1.js",
                "assets/2.jpg"
            ]
        },
        "res": {
            "enable": 1,
            "file": [
                "res/layout/1.xml",
                "res/layout/2.xml"
            ]
        }
    }
}’

aab加固方案二
单独vmp加固：
‘{
    "vmp": {
        "enable": 1,
        "ndkpath": "/xxx/android-ndk-r10e",
        "profile": "/xxx/vmpprofile.txt",
        "mapping": "/xxx/mapping.txt",
        "antiprotect": 1,
        "antimonitor": 1
    }
}’
                     * @return EncryptParam android加固必输字段。
加固策略，json格式字符串。
字段说明（0-关闭，1-开启）：
        "enable"=1 #DEX整体加固;
        "antiprotect"=1 #反调试;
        "antirepack"=1 #防重打包、防篡改;
        "dexsig"=1       #签名校验;
        "antimonitor"=1 #防模拟器运行保护;
        "ptrace"=1 #防动态注入、动态调试;
        "so"."enable" = 1 #文件加密;
        "vmp"."enable" = 1 #VMP虚拟化保护;
        "respro"."assets"."enable" = 1 #assets资源文件加密
       "respro"."res"."enable" = 1 #res资源文件加密

so文件加密：
支持5种架构:
apk 格式: /lib/armeabi/libxxx.so,/lib/arm64-v8a/libxxx.so,/lib/armeabi-v7a/libxxx.so,/lib/x86/libxxx.so,/lib/x86_64/libxxx.so
aab格式: /base/lib/armeabi/libxxx.so,/base/lib/arm64-v8a/libxxx.so,/base/lib/armeabi-v7a/libxxx.so,/base/lib/x86/libxxx.so,/base/lib/x86_64/libxxx.so
请列举 SO 库在 apk 文件解压后的完整有效路径，如:/lib/armeabi/libxxx.so；
需要加固的 SO 库需确认为自研的 SO 库，不要加固第三方 SO 库，否则会增加 crash 风险

res资源文件加密注意事项：
请指定需要加密的文件全路径，如：res/layout/1.xml;
res资源文件加密不能加密APP图标
res目录文件，不能加密以下后缀规则的文件".wav", ".mp2", ".mp3", ".ogg", ".aac", ".mpg",".mpeg", ".mid", ".midi", ".smf", ".jet", ".rtttl", ".imy", ".xmf", ".mp4", ".m4a", ".m4v", ".3gp",".3gpp", ".3g2", ".3gpp2", ".amr", ".awb", ".wma", ".wmv"

assets资源文件加密注意事项:
请指定需要加密的文件全路径，如：assets/main.js；可以完整路径，也可以相对路径。
如果有通配符需要完整路径 ":all"或者"*"代表所有文件
assets资源文件加密不能加密APP图标
assets目录文件，不能加密以下后缀规则的文件".wav", ".mp2", ".mp3", ".ogg", ".aac", ".mpg",".mpeg", ".mid", ".midi", ".smf", ".jet", ".rtttl", ".imy", ".xmf", ".mp4", ".m4a", ".m4v", ".3gp",".3gpp", ".3g2", ".3gpp2", ".amr", ".awb", ".wma", ".wmv"


apk[dex+so+vmp+res+assets]加固参数示例：
‘{
    "dex": {
        "enable": 1,
        "antiprotect": 1,
        "antirepack": 1,
        "dexsig": 1,
        "antimonitor": 1,
        "ptrace": 1
    },
    "so": {
        "enable": 1,
        "ver": "1.3.3",
        "file": [
            "/lib/armeabi/libtest.so"
        ]
    },
    "vmp": {
        "enable": 1,
        "ndkpath": "/xxx/android-ndk-r10e",
        "profile": "/xxx/vmpprofile.txt",
        "mapping": "/xxx/mapping.txt"
    },
    "respro": {
        "assets": {
            "enable": 1,
            "file": [
                "assets/1.js",
                "assets/2.jpg"
            ]
        },
        "res": {
            "enable": 1,
            "file": [
                "res/layout/1.xml",
                "res/layout/2.xml"
            ]
        }
    }
}’

aab加固方案一 
[dex+res+assets]加固json字符串：
‘{
    "dex": {
        "enable": 1,
        "antiprotect": 1,
        "antimonitor": 1
    },
    "respro": {
        "assets": {
            "enable": 1,
            "file": [
                "assets/1.js",
                "assets/2.jpg"
            ]
        },
        "res": {
            "enable": 1,
            "file": [
                "res/layout/1.xml",
                "res/layout/2.xml"
            ]
        }
    }
}’

aab加固方案二
单独vmp加固：
‘{
    "vmp": {
        "enable": 1,
        "ndkpath": "/xxx/android-ndk-r10e",
        "profile": "/xxx/vmpprofile.txt",
        "mapping": "/xxx/mapping.txt",
        "antiprotect": 1,
        "antimonitor": 1
    }
}’
                     * 
                     */
                    std::string GetEncryptParam() const;

                    /**
                     * 设置android加固必输字段。
加固策略，json格式字符串。
字段说明（0-关闭，1-开启）：
        "enable"=1 #DEX整体加固;
        "antiprotect"=1 #反调试;
        "antirepack"=1 #防重打包、防篡改;
        "dexsig"=1       #签名校验;
        "antimonitor"=1 #防模拟器运行保护;
        "ptrace"=1 #防动态注入、动态调试;
        "so"."enable" = 1 #文件加密;
        "vmp"."enable" = 1 #VMP虚拟化保护;
        "respro"."assets"."enable" = 1 #assets资源文件加密
       "respro"."res"."enable" = 1 #res资源文件加密

so文件加密：
支持5种架构:
apk 格式: /lib/armeabi/libxxx.so,/lib/arm64-v8a/libxxx.so,/lib/armeabi-v7a/libxxx.so,/lib/x86/libxxx.so,/lib/x86_64/libxxx.so
aab格式: /base/lib/armeabi/libxxx.so,/base/lib/arm64-v8a/libxxx.so,/base/lib/armeabi-v7a/libxxx.so,/base/lib/x86/libxxx.so,/base/lib/x86_64/libxxx.so
请列举 SO 库在 apk 文件解压后的完整有效路径，如:/lib/armeabi/libxxx.so；
需要加固的 SO 库需确认为自研的 SO 库，不要加固第三方 SO 库，否则会增加 crash 风险

res资源文件加密注意事项：
请指定需要加密的文件全路径，如：res/layout/1.xml;
res资源文件加密不能加密APP图标
res目录文件，不能加密以下后缀规则的文件".wav", ".mp2", ".mp3", ".ogg", ".aac", ".mpg",".mpeg", ".mid", ".midi", ".smf", ".jet", ".rtttl", ".imy", ".xmf", ".mp4", ".m4a", ".m4v", ".3gp",".3gpp", ".3g2", ".3gpp2", ".amr", ".awb", ".wma", ".wmv"

assets资源文件加密注意事项:
请指定需要加密的文件全路径，如：assets/main.js；可以完整路径，也可以相对路径。
如果有通配符需要完整路径 ":all"或者"*"代表所有文件
assets资源文件加密不能加密APP图标
assets目录文件，不能加密以下后缀规则的文件".wav", ".mp2", ".mp3", ".ogg", ".aac", ".mpg",".mpeg", ".mid", ".midi", ".smf", ".jet", ".rtttl", ".imy", ".xmf", ".mp4", ".m4a", ".m4v", ".3gp",".3gpp", ".3g2", ".3gpp2", ".amr", ".awb", ".wma", ".wmv"


apk[dex+so+vmp+res+assets]加固参数示例：
‘{
    "dex": {
        "enable": 1,
        "antiprotect": 1,
        "antirepack": 1,
        "dexsig": 1,
        "antimonitor": 1,
        "ptrace": 1
    },
    "so": {
        "enable": 1,
        "ver": "1.3.3",
        "file": [
            "/lib/armeabi/libtest.so"
        ]
    },
    "vmp": {
        "enable": 1,
        "ndkpath": "/xxx/android-ndk-r10e",
        "profile": "/xxx/vmpprofile.txt",
        "mapping": "/xxx/mapping.txt"
    },
    "respro": {
        "assets": {
            "enable": 1,
            "file": [
                "assets/1.js",
                "assets/2.jpg"
            ]
        },
        "res": {
            "enable": 1,
            "file": [
                "res/layout/1.xml",
                "res/layout/2.xml"
            ]
        }
    }
}’

aab加固方案一 
[dex+res+assets]加固json字符串：
‘{
    "dex": {
        "enable": 1,
        "antiprotect": 1,
        "antimonitor": 1
    },
    "respro": {
        "assets": {
            "enable": 1,
            "file": [
                "assets/1.js",
                "assets/2.jpg"
            ]
        },
        "res": {
            "enable": 1,
            "file": [
                "res/layout/1.xml",
                "res/layout/2.xml"
            ]
        }
    }
}’

aab加固方案二
单独vmp加固：
‘{
    "vmp": {
        "enable": 1,
        "ndkpath": "/xxx/android-ndk-r10e",
        "profile": "/xxx/vmpprofile.txt",
        "mapping": "/xxx/mapping.txt",
        "antiprotect": 1,
        "antimonitor": 1
    }
}’
                     * @param _encryptParam android加固必输字段。
加固策略，json格式字符串。
字段说明（0-关闭，1-开启）：
        "enable"=1 #DEX整体加固;
        "antiprotect"=1 #反调试;
        "antirepack"=1 #防重打包、防篡改;
        "dexsig"=1       #签名校验;
        "antimonitor"=1 #防模拟器运行保护;
        "ptrace"=1 #防动态注入、动态调试;
        "so"."enable" = 1 #文件加密;
        "vmp"."enable" = 1 #VMP虚拟化保护;
        "respro"."assets"."enable" = 1 #assets资源文件加密
       "respro"."res"."enable" = 1 #res资源文件加密

so文件加密：
支持5种架构:
apk 格式: /lib/armeabi/libxxx.so,/lib/arm64-v8a/libxxx.so,/lib/armeabi-v7a/libxxx.so,/lib/x86/libxxx.so,/lib/x86_64/libxxx.so
aab格式: /base/lib/armeabi/libxxx.so,/base/lib/arm64-v8a/libxxx.so,/base/lib/armeabi-v7a/libxxx.so,/base/lib/x86/libxxx.so,/base/lib/x86_64/libxxx.so
请列举 SO 库在 apk 文件解压后的完整有效路径，如:/lib/armeabi/libxxx.so；
需要加固的 SO 库需确认为自研的 SO 库，不要加固第三方 SO 库，否则会增加 crash 风险

res资源文件加密注意事项：
请指定需要加密的文件全路径，如：res/layout/1.xml;
res资源文件加密不能加密APP图标
res目录文件，不能加密以下后缀规则的文件".wav", ".mp2", ".mp3", ".ogg", ".aac", ".mpg",".mpeg", ".mid", ".midi", ".smf", ".jet", ".rtttl", ".imy", ".xmf", ".mp4", ".m4a", ".m4v", ".3gp",".3gpp", ".3g2", ".3gpp2", ".amr", ".awb", ".wma", ".wmv"

assets资源文件加密注意事项:
请指定需要加密的文件全路径，如：assets/main.js；可以完整路径，也可以相对路径。
如果有通配符需要完整路径 ":all"或者"*"代表所有文件
assets资源文件加密不能加密APP图标
assets目录文件，不能加密以下后缀规则的文件".wav", ".mp2", ".mp3", ".ogg", ".aac", ".mpg",".mpeg", ".mid", ".midi", ".smf", ".jet", ".rtttl", ".imy", ".xmf", ".mp4", ".m4a", ".m4v", ".3gp",".3gpp", ".3g2", ".3gpp2", ".amr", ".awb", ".wma", ".wmv"


apk[dex+so+vmp+res+assets]加固参数示例：
‘{
    "dex": {
        "enable": 1,
        "antiprotect": 1,
        "antirepack": 1,
        "dexsig": 1,
        "antimonitor": 1,
        "ptrace": 1
    },
    "so": {
        "enable": 1,
        "ver": "1.3.3",
        "file": [
            "/lib/armeabi/libtest.so"
        ]
    },
    "vmp": {
        "enable": 1,
        "ndkpath": "/xxx/android-ndk-r10e",
        "profile": "/xxx/vmpprofile.txt",
        "mapping": "/xxx/mapping.txt"
    },
    "respro": {
        "assets": {
            "enable": 1,
            "file": [
                "assets/1.js",
                "assets/2.jpg"
            ]
        },
        "res": {
            "enable": 1,
            "file": [
                "res/layout/1.xml",
                "res/layout/2.xml"
            ]
        }
    }
}’

aab加固方案一 
[dex+res+assets]加固json字符串：
‘{
    "dex": {
        "enable": 1,
        "antiprotect": 1,
        "antimonitor": 1
    },
    "respro": {
        "assets": {
            "enable": 1,
            "file": [
                "assets/1.js",
                "assets/2.jpg"
            ]
        },
        "res": {
            "enable": 1,
            "file": [
                "res/layout/1.xml",
                "res/layout/2.xml"
            ]
        }
    }
}’

aab加固方案二
单独vmp加固：
‘{
    "vmp": {
        "enable": 1,
        "ndkpath": "/xxx/android-ndk-r10e",
        "profile": "/xxx/vmpprofile.txt",
        "mapping": "/xxx/mapping.txt",
        "antiprotect": 1,
        "antimonitor": 1
    }
}’
                     * 
                     */
                    void SetEncryptParam(const std::string& _encryptParam);

                    /**
                     * 判断参数 EncryptParam 是否已赋值
                     * @return EncryptParam 是否已赋值
                     * 
                     */
                    bool EncryptParamHasBeenSet() const;

                private:

                    /**
                     * 非必输字段，PlanId 是指本次加固使用的配置策略Id，可通过载入上次配置接口获取。其值非0时，代表引用对应的策略。
                     */
                    int64_t m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 本次操作的包名。
当收费模式是android按年收费和android免费试用的在线加固和输出工具加固时，要求该字段必输，且与AndroidAppInfo.AppPkgName值相等。
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                    /**
                     * android app的文件类型，本次加固操作的应用类型 。 
android在线加固和输出工具加固必输，其值需等于“apk”或“aab”，且与AndroidAppInfo.AppType值相等。

                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * android加固必输字段。
加固策略，json格式字符串。
字段说明（0-关闭，1-开启）：
        "enable"=1 #DEX整体加固;
        "antiprotect"=1 #反调试;
        "antirepack"=1 #防重打包、防篡改;
        "dexsig"=1       #签名校验;
        "antimonitor"=1 #防模拟器运行保护;
        "ptrace"=1 #防动态注入、动态调试;
        "so"."enable" = 1 #文件加密;
        "vmp"."enable" = 1 #VMP虚拟化保护;
        "respro"."assets"."enable" = 1 #assets资源文件加密
       "respro"."res"."enable" = 1 #res资源文件加密

so文件加密：
支持5种架构:
apk 格式: /lib/armeabi/libxxx.so,/lib/arm64-v8a/libxxx.so,/lib/armeabi-v7a/libxxx.so,/lib/x86/libxxx.so,/lib/x86_64/libxxx.so
aab格式: /base/lib/armeabi/libxxx.so,/base/lib/arm64-v8a/libxxx.so,/base/lib/armeabi-v7a/libxxx.so,/base/lib/x86/libxxx.so,/base/lib/x86_64/libxxx.so
请列举 SO 库在 apk 文件解压后的完整有效路径，如:/lib/armeabi/libxxx.so；
需要加固的 SO 库需确认为自研的 SO 库，不要加固第三方 SO 库，否则会增加 crash 风险

res资源文件加密注意事项：
请指定需要加密的文件全路径，如：res/layout/1.xml;
res资源文件加密不能加密APP图标
res目录文件，不能加密以下后缀规则的文件".wav", ".mp2", ".mp3", ".ogg", ".aac", ".mpg",".mpeg", ".mid", ".midi", ".smf", ".jet", ".rtttl", ".imy", ".xmf", ".mp4", ".m4a", ".m4v", ".3gp",".3gpp", ".3g2", ".3gpp2", ".amr", ".awb", ".wma", ".wmv"

assets资源文件加密注意事项:
请指定需要加密的文件全路径，如：assets/main.js；可以完整路径，也可以相对路径。
如果有通配符需要完整路径 ":all"或者"*"代表所有文件
assets资源文件加密不能加密APP图标
assets目录文件，不能加密以下后缀规则的文件".wav", ".mp2", ".mp3", ".ogg", ".aac", ".mpg",".mpeg", ".mid", ".midi", ".smf", ".jet", ".rtttl", ".imy", ".xmf", ".mp4", ".m4a", ".m4v", ".3gp",".3gpp", ".3g2", ".3gpp2", ".amr", ".awb", ".wma", ".wmv"


apk[dex+so+vmp+res+assets]加固参数示例：
‘{
    "dex": {
        "enable": 1,
        "antiprotect": 1,
        "antirepack": 1,
        "dexsig": 1,
        "antimonitor": 1,
        "ptrace": 1
    },
    "so": {
        "enable": 1,
        "ver": "1.3.3",
        "file": [
            "/lib/armeabi/libtest.so"
        ]
    },
    "vmp": {
        "enable": 1,
        "ndkpath": "/xxx/android-ndk-r10e",
        "profile": "/xxx/vmpprofile.txt",
        "mapping": "/xxx/mapping.txt"
    },
    "respro": {
        "assets": {
            "enable": 1,
            "file": [
                "assets/1.js",
                "assets/2.jpg"
            ]
        },
        "res": {
            "enable": 1,
            "file": [
                "res/layout/1.xml",
                "res/layout/2.xml"
            ]
        }
    }
}’

aab加固方案一 
[dex+res+assets]加固json字符串：
‘{
    "dex": {
        "enable": 1,
        "antiprotect": 1,
        "antimonitor": 1
    },
    "respro": {
        "assets": {
            "enable": 1,
            "file": [
                "assets/1.js",
                "assets/2.jpg"
            ]
        },
        "res": {
            "enable": 1,
            "file": [
                "res/layout/1.xml",
                "res/layout/2.xml"
            ]
        }
    }
}’

aab加固方案二
单独vmp加固：
‘{
    "vmp": {
        "enable": 1,
        "ndkpath": "/xxx/android-ndk-r10e",
        "profile": "/xxx/vmpprofile.txt",
        "mapping": "/xxx/mapping.txt",
        "antiprotect": 1,
        "antimonitor": 1
    }
}’
                     */
                    std::string m_encryptParam;
                    bool m_encryptParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_ANDROIDPLAN_H_
