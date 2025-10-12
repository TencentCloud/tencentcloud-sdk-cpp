/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/model/DataSourceFileUpload.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

DataSourceFileUpload::DataSourceFileUpload() :
    m_trustStoreHasBeenSet(false),
    m_keyStoreHasBeenSet(false),
    m_coreSiteHasBeenSet(false),
    m_hdfsSiteHasBeenSet(false),
    m_hiveSiteHasBeenSet(false),
    m_hBASESiteHasBeenSet(false),
    m_keyTabHasBeenSet(false),
    m_kRB5ConfHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_publicKeyHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceFileUpload::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TrustStore") && !value["TrustStore"].IsNull())
    {
        if (!value["TrustStore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceFileUpload.TrustStore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trustStore = string(value["TrustStore"].GetString());
        m_trustStoreHasBeenSet = true;
    }

    if (value.HasMember("KeyStore") && !value["KeyStore"].IsNull())
    {
        if (!value["KeyStore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceFileUpload.KeyStore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyStore = string(value["KeyStore"].GetString());
        m_keyStoreHasBeenSet = true;
    }

    if (value.HasMember("CoreSite") && !value["CoreSite"].IsNull())
    {
        if (!value["CoreSite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceFileUpload.CoreSite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coreSite = string(value["CoreSite"].GetString());
        m_coreSiteHasBeenSet = true;
    }

    if (value.HasMember("HdfsSite") && !value["HdfsSite"].IsNull())
    {
        if (!value["HdfsSite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceFileUpload.HdfsSite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hdfsSite = string(value["HdfsSite"].GetString());
        m_hdfsSiteHasBeenSet = true;
    }

    if (value.HasMember("HiveSite") && !value["HiveSite"].IsNull())
    {
        if (!value["HiveSite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceFileUpload.HiveSite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveSite = string(value["HiveSite"].GetString());
        m_hiveSiteHasBeenSet = true;
    }

    if (value.HasMember("HBASESite") && !value["HBASESite"].IsNull())
    {
        if (!value["HBASESite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceFileUpload.HBASESite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hBASESite = string(value["HBASESite"].GetString());
        m_hBASESiteHasBeenSet = true;
    }

    if (value.HasMember("KeyTab") && !value["KeyTab"].IsNull())
    {
        if (!value["KeyTab"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceFileUpload.KeyTab` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyTab = string(value["KeyTab"].GetString());
        m_keyTabHasBeenSet = true;
    }

    if (value.HasMember("KRB5Conf") && !value["KRB5Conf"].IsNull())
    {
        if (!value["KRB5Conf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceFileUpload.KRB5Conf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kRB5Conf = string(value["KRB5Conf"].GetString());
        m_kRB5ConfHasBeenSet = true;
    }

    if (value.HasMember("PrivateKey") && !value["PrivateKey"].IsNull())
    {
        if (!value["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceFileUpload.PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(value["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }

    if (value.HasMember("PublicKey") && !value["PublicKey"].IsNull())
    {
        if (!value["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceFileUpload.PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(value["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceFileUpload::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trustStoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrustStore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trustStore.c_str(), allocator).Move(), allocator);
    }

    if (m_keyStoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyStore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyStore.c_str(), allocator).Move(), allocator);
    }

    if (m_coreSiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreSite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coreSite.c_str(), allocator).Move(), allocator);
    }

    if (m_hdfsSiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HdfsSite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hdfsSite.c_str(), allocator).Move(), allocator);
    }

    if (m_hiveSiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiveSite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hiveSite.c_str(), allocator).Move(), allocator);
    }

    if (m_hBASESiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HBASESite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hBASESite.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTabHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyTab";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyTab.c_str(), allocator).Move(), allocator);
    }

    if (m_kRB5ConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KRB5Conf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kRB5Conf.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

}


string DataSourceFileUpload::GetTrustStore() const
{
    return m_trustStore;
}

void DataSourceFileUpload::SetTrustStore(const string& _trustStore)
{
    m_trustStore = _trustStore;
    m_trustStoreHasBeenSet = true;
}

bool DataSourceFileUpload::TrustStoreHasBeenSet() const
{
    return m_trustStoreHasBeenSet;
}

string DataSourceFileUpload::GetKeyStore() const
{
    return m_keyStore;
}

void DataSourceFileUpload::SetKeyStore(const string& _keyStore)
{
    m_keyStore = _keyStore;
    m_keyStoreHasBeenSet = true;
}

bool DataSourceFileUpload::KeyStoreHasBeenSet() const
{
    return m_keyStoreHasBeenSet;
}

string DataSourceFileUpload::GetCoreSite() const
{
    return m_coreSite;
}

void DataSourceFileUpload::SetCoreSite(const string& _coreSite)
{
    m_coreSite = _coreSite;
    m_coreSiteHasBeenSet = true;
}

bool DataSourceFileUpload::CoreSiteHasBeenSet() const
{
    return m_coreSiteHasBeenSet;
}

string DataSourceFileUpload::GetHdfsSite() const
{
    return m_hdfsSite;
}

void DataSourceFileUpload::SetHdfsSite(const string& _hdfsSite)
{
    m_hdfsSite = _hdfsSite;
    m_hdfsSiteHasBeenSet = true;
}

bool DataSourceFileUpload::HdfsSiteHasBeenSet() const
{
    return m_hdfsSiteHasBeenSet;
}

string DataSourceFileUpload::GetHiveSite() const
{
    return m_hiveSite;
}

void DataSourceFileUpload::SetHiveSite(const string& _hiveSite)
{
    m_hiveSite = _hiveSite;
    m_hiveSiteHasBeenSet = true;
}

bool DataSourceFileUpload::HiveSiteHasBeenSet() const
{
    return m_hiveSiteHasBeenSet;
}

string DataSourceFileUpload::GetHBASESite() const
{
    return m_hBASESite;
}

void DataSourceFileUpload::SetHBASESite(const string& _hBASESite)
{
    m_hBASESite = _hBASESite;
    m_hBASESiteHasBeenSet = true;
}

bool DataSourceFileUpload::HBASESiteHasBeenSet() const
{
    return m_hBASESiteHasBeenSet;
}

string DataSourceFileUpload::GetKeyTab() const
{
    return m_keyTab;
}

void DataSourceFileUpload::SetKeyTab(const string& _keyTab)
{
    m_keyTab = _keyTab;
    m_keyTabHasBeenSet = true;
}

bool DataSourceFileUpload::KeyTabHasBeenSet() const
{
    return m_keyTabHasBeenSet;
}

string DataSourceFileUpload::GetKRB5Conf() const
{
    return m_kRB5Conf;
}

void DataSourceFileUpload::SetKRB5Conf(const string& _kRB5Conf)
{
    m_kRB5Conf = _kRB5Conf;
    m_kRB5ConfHasBeenSet = true;
}

bool DataSourceFileUpload::KRB5ConfHasBeenSet() const
{
    return m_kRB5ConfHasBeenSet;
}

string DataSourceFileUpload::GetPrivateKey() const
{
    return m_privateKey;
}

void DataSourceFileUpload::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool DataSourceFileUpload::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string DataSourceFileUpload::GetPublicKey() const
{
    return m_publicKey;
}

void DataSourceFileUpload::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool DataSourceFileUpload::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

