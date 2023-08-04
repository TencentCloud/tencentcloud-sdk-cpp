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

#ifndef TENCENTCLOUD_BRI_V20190328_MODEL_BRIREQUEST_H_
#define TENCENTCLOUD_BRI_V20190328_MODEL_BRIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bri
    {
        namespace V20190328
        {
            namespace Model
            {
                /**
                * BRI请求
                */
                class BRIRequest : public AbstractModel
                {
                public:
                    BRIRequest();
                    ~BRIRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取业务名, 必须是以下六个业务名之一(bri_num,bri_dev,bri_ip_bri_apk,bri_url,bri_social)
                     * @return Service 业务名, 必须是以下六个业务名之一(bri_num,bri_dev,bri_ip_bri_apk,bri_url,bri_social)
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置业务名, 必须是以下六个业务名之一(bri_num,bri_dev,bri_ip_bri_apk,bri_url,bri_social)
                     * @param _service 业务名, 必须是以下六个业务名之一(bri_num,bri_dev,bri_ip_bri_apk,bri_url,bri_social)
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取QQ号 (业务名为bri_social时必填, 除非已填Wechat)
                     * @return QQ QQ号 (业务名为bri_social时必填, 除非已填Wechat)
                     * 
                     */
                    std::string GetQQ() const;

                    /**
                     * 设置QQ号 (业务名为bri_social时必填, 除非已填Wechat)
                     * @param _qQ QQ号 (业务名为bri_social时必填, 除非已填Wechat)
                     * 
                     */
                    void SetQQ(const std::string& _qQ);

                    /**
                     * 判断参数 QQ 是否已赋值
                     * @return QQ 是否已赋值
                     * 
                     */
                    bool QQHasBeenSet() const;

                    /**
                     * 获取QQ号的可疑标签
                     * @return QQTag QQ号的可疑标签
                     * 
                     */
                    std::string GetQQTag() const;

                    /**
                     * 设置QQ号的可疑标签
                     * @param _qQTag QQ号的可疑标签
                     * 
                     */
                    void SetQQTag(const std::string& _qQTag);

                    /**
                     * 判断参数 QQTag 是否已赋值
                     * @return QQTag 是否已赋值
                     * 
                     */
                    bool QQTagHasBeenSet() const;

                    /**
                     * 获取网址 (业务名为bri_url时必填)
                     * @return Url 网址 (业务名为bri_url时必填)
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置网址 (业务名为bri_url时必填)
                     * @param _url 网址 (业务名为bri_url时必填)
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Apk证书Md5  (业务名为bri_apk时必填，除非已填FileMd5)
                     * @return CertMd5 Apk证书Md5  (业务名为bri_apk时必填，除非已填FileMd5)
                     * 
                     */
                    std::string GetCertMd5() const;

                    /**
                     * 设置Apk证书Md5  (业务名为bri_apk时必填，除非已填FileMd5)
                     * @param _certMd5 Apk证书Md5  (业务名为bri_apk时必填，除非已填FileMd5)
                     * 
                     */
                    void SetCertMd5(const std::string& _certMd5);

                    /**
                     * 判断参数 CertMd5 是否已赋值
                     * @return CertMd5 是否已赋值
                     * 
                     */
                    bool CertMd5HasBeenSet() const;

                    /**
                     * 获取Apk安装包名 (业务名为bri_apk时必填，除非已填FileMd5)
                     * @return PackageName Apk安装包名 (业务名为bri_apk时必填，除非已填FileMd5)
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置Apk安装包名 (业务名为bri_apk时必填，除非已填FileMd5)
                     * @param _packageName Apk安装包名 (业务名为bri_apk时必填，除非已填FileMd5)
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取Apk文件Md5 (业务名为bri_apk时必填，除非已填PackageName,CertMd5,FileSize)
                     * @return FileMd5 Apk文件Md5 (业务名为bri_apk时必填，除非已填PackageName,CertMd5,FileSize)
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置Apk文件Md5 (业务名为bri_apk时必填，除非已填PackageName,CertMd5,FileSize)
                     * @param _fileMd5 Apk文件Md5 (业务名为bri_apk时必填，除非已填PackageName,CertMd5,FileSize)
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取业务场景 (1-注册, 2-登录, 3-发消息)
                     * @return Scene 业务场景 (1-注册, 2-登录, 3-发消息)
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置业务场景 (1-注册, 2-登录, 3-发消息)
                     * @param _scene 业务场景 (1-注册, 2-登录, 3-发消息)
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取电话号码 (业务名为bri_num时必填)
                     * @return PhoneNumber 电话号码 (业务名为bri_num时必填)
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置电话号码 (业务名为bri_num时必填)
                     * @param _phoneNumber 电话号码 (业务名为bri_num时必填)
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取Apk文件大小  (业务名为bri_apk时必填，除非已填FileMd5)
                     * @return FileSize Apk文件大小  (业务名为bri_apk时必填，除非已填FileMd5)
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置Apk文件大小  (业务名为bri_apk时必填，除非已填FileMd5)
                     * @param _fileSize Apk文件大小  (业务名为bri_apk时必填，除非已填FileMd5)
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取点分格式的IP (业务名为bri_ip时必填)
                     * @return Ip 点分格式的IP (业务名为bri_ip时必填)
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置点分格式的IP (业务名为bri_ip时必填)
                     * @param _ip 点分格式的IP (业务名为bri_ip时必填)
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取安卓设备的Imei (业务名为bri_dev时必填)
                     * @return Imei 安卓设备的Imei (业务名为bri_dev时必填)
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置安卓设备的Imei (业务名为bri_dev时必填)
                     * @param _imei 安卓设备的Imei (业务名为bri_dev时必填)
                     * 
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取微信号 (业务名为bri_social时必填, 除非已填QQ)
                     * @return Wechat 微信号 (业务名为bri_social时必填, 除非已填QQ)
                     * 
                     */
                    std::string GetWechat() const;

                    /**
                     * 设置微信号 (业务名为bri_social时必填, 除非已填QQ)
                     * @param _wechat 微信号 (业务名为bri_social时必填, 除非已填QQ)
                     * 
                     */
                    void SetWechat(const std::string& _wechat);

                    /**
                     * 判断参数 Wechat 是否已赋值
                     * @return Wechat 是否已赋值
                     * 
                     */
                    bool WechatHasBeenSet() const;

                    /**
                     * 获取微信号的可疑标签
                     * @return WechatTag 微信号的可疑标签
                     * 
                     */
                    std::string GetWechatTag() const;

                    /**
                     * 设置微信号的可疑标签
                     * @param _wechatTag 微信号的可疑标签
                     * 
                     */
                    void SetWechatTag(const std::string& _wechatTag);

                    /**
                     * 判断参数 WechatTag 是否已赋值
                     * @return WechatTag 是否已赋值
                     * 
                     */
                    bool WechatTagHasBeenSet() const;

                    /**
                     * 获取子客户ID
                     * @return SubAppid 子客户ID
                     * 
                     */
                    std::string GetSubAppid() const;

                    /**
                     * 设置子客户ID
                     * @param _subAppid 子客户ID
                     * 
                     */
                    void SetSubAppid(const std::string& _subAppid);

                    /**
                     * 判断参数 SubAppid 是否已赋值
                     * @return SubAppid 是否已赋值
                     * 
                     */
                    bool SubAppidHasBeenSet() const;

                private:

                    /**
                     * 业务名, 必须是以下六个业务名之一(bri_num,bri_dev,bri_ip_bri_apk,bri_url,bri_social)
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * QQ号 (业务名为bri_social时必填, 除非已填Wechat)
                     */
                    std::string m_qQ;
                    bool m_qQHasBeenSet;

                    /**
                     * QQ号的可疑标签
                     */
                    std::string m_qQTag;
                    bool m_qQTagHasBeenSet;

                    /**
                     * 网址 (业务名为bri_url时必填)
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Apk证书Md5  (业务名为bri_apk时必填，除非已填FileMd5)
                     */
                    std::string m_certMd5;
                    bool m_certMd5HasBeenSet;

                    /**
                     * Apk安装包名 (业务名为bri_apk时必填，除非已填FileMd5)
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * Apk文件Md5 (业务名为bri_apk时必填，除非已填PackageName,CertMd5,FileSize)
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 业务场景 (1-注册, 2-登录, 3-发消息)
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 电话号码 (业务名为bri_num时必填)
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Apk文件大小  (业务名为bri_apk时必填，除非已填FileMd5)
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 点分格式的IP (业务名为bri_ip时必填)
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 安卓设备的Imei (业务名为bri_dev时必填)
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * 微信号 (业务名为bri_social时必填, 除非已填QQ)
                     */
                    std::string m_wechat;
                    bool m_wechatHasBeenSet;

                    /**
                     * 微信号的可疑标签
                     */
                    std::string m_wechatTag;
                    bool m_wechatTagHasBeenSet;

                    /**
                     * 子客户ID
                     */
                    std::string m_subAppid;
                    bool m_subAppidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BRI_V20190328_MODEL_BRIREQUEST_H_
